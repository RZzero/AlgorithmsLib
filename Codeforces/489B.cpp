#include <bits/stdc++.h>

using namespace std; 
vector<int> B;
vector<int> G;
int N,M;

int DP(int b_idx, int g_idx){

    if(g_idx >= M || b_idx >= N){
        return 0;
    }


    int res = 0;
    for(int i = b_idx; i < B.size(); i++){
        cout << i << " " << g_idx << endl;
        cout << B[i] << " " << G[g_idx] << endl;

        if( abs(B[i]-G[g_idx]) <= 1){

            res = max(res+1, DP(i+1,g_idx++) );
        }

    }
    return res;

}
int main(){
    int dummy;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        B.push_back(dummy);
    }
    
    cin >> M;

    for(int i =0; i < M; i++){
        cin >> dummy;
        G.push_back(dummy);
    }
    sort(B.begin(),B.end());
    sort(G.begin(),G.end());
    cout << DP(0,0) << endl;

    return 0;
}
