#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string a,b;
    cin >> a >> b;

    if(b.size() > a.size()){
        swap(a,b);
    }
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int i;
    bool check = false;
    for(i = 0; i < a.size(); i++){
        if(a[i] != b[i]) break;
    }
    cout << (a.size() - i) + (b.size() - i) << endl;

    return 0;
}
