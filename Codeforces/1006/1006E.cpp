#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis;
VI pos;
VI initial_time;
VI end_time;
int dist = 1;

void DFS(int u){
    vis[u] = 1;
    pos[dist] = u;
    
    initial_time[u] = dist;
    for(int v: adj[u]){
        if(vis[v]) continue;
        dist++;
        DFS(v);
    }
    end_time[u] = dist;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, Q, u;
    cin >> N >> Q;

    adj = VII(N + 1);
    vis = VI(N + 1);
    pos = VI(N + 1);
    initial_time = VI(N + 1);
    end_time = VI(N + 1);

    for(int i = 2; i <= N; i++){
        cin >> u;
        adj[u].push_back(i);
    }

    DFS(1);

    for(int i = 0; i < Q; i++){
        int u, k;
        cin >> u >> k;

        if(end_time[u] - initial_time[u] + 1 < k){
            cout << -1 << endl;
        }else{
            cout << pos[u + k - 1] << endl;
        }
    }

    return 0;
}