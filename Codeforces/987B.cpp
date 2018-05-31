#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int x, y;
    cin >> x >> y;

    if(x == 1 && y == 1){
        cout << "=" << endl;
        return 0;
    }

    double xy = log(x)/log(y);
    double yx = log(y)/log(x);

    // cout << xy << " " << yx << endl;

    if(xy == yx) cout << "=" << endl;
    else if (xy < yx || xy == INFINITY) cout << ">" << endl;
    else cout << "<" << endl;

    return 0;
}
