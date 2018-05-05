#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    set<int> mset;
    cin >> N;
    int mini,pos;
    mini = 1e9;

    for(int i = 0; i < N; i++){
        int dummy;
        cin >> dummy;
        if(dummy < mini){
            mini = dummy;
            pos = i+1;
        }
        mset.insert(dummy);
    }

    if(mset.size() != N) cout << "Still Rozdil" << endl;
    else cout << pos << endl;

    return 0;
}
