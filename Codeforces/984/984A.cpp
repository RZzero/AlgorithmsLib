#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    vector<int> maxis;
    vector<int> minis;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dum;
        // maxis.push_back(dum);
        minis.push_back(dum);
    }
    
    sort(minis.begin(),minis.end());
    // sort(maxis.rbegin(),maxis.rend());

    if(N%2 == 0){
        cout << minis[N/2 - 1] << endl;
    }else{
        cout << minis[floor(N/2)] << endl;
    }
    
    return 0;
}
