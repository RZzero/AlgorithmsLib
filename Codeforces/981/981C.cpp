#include <bits/stdc++.h>

using namespace std;
 
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis;
int INF = 1e9;
int the_joa = INF;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, u, v;
    cin >> N;

    adj = VII(N);
    vis = VI(N);

    for(int i = 0; i < N-1; i++){
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;
    vector<int> anw;
    for(int u = 0; u < N; u++){
        if(adj[u].size() == 1) anw.push_back(u);
        else if(adj[u].size() > 2){
            cnt++;
            the_joa = u;
        }
    }

    if(!cnt){
        cout << "Yes" << endl;
        cout << anw.size() - 1<< endl;
        cout << anw[0] + 1 << " " << anw[1] + 1<< endl;
    }else if(cnt == 1){
        cout << "Yes" << endl;
        cout << anw.size() << endl;
        // cout << "THE JOA " << adj[the_joa].size() << endl;
        for(int u = 0; u < anw.size(); u++){
            cout << the_joa + 1 << " " << anw[u] + 1 << endl;
        }
    }else{
        cout << "No" << endl;
    }
    

    return 0;
}
