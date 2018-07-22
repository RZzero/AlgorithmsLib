#include <bits/stdc++.h>

using namespace std; 


int main(){

    int N, D;

    cin >> N>> D;
    vector<int> V;
    int dummy;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy);
    }

    sort(V.begin(),V.end());
    int maxi = -1e9;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        int cnt = 0;
        for(int j = i+1; j < N; j++){
            if(abs(V[i]-V[j]) > D){
                cnt++;
            }
        }
        // cout << i << " cnt -> " << cnt << endl;
        maxi = max(maxi,cnt);
    }
    
    cout << maxi << endl;
    return 0;
}
