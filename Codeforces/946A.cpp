#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum, pos, neg;
    pos = neg = 0;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dum;
        if(dum > 0) pos +=dum;
        else neg+=dum;
    }

    cout << pos-neg << endl;

    return 0;
}

