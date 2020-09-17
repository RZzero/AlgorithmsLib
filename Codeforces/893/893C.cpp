#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<ull> VUL;
VII adj;
VI vis;
VUL cost;

ull DFS(int u, ull mincost = (ull)2 * 1e18){
    mincost = min(cost[u],mincost);
    vis[u] = true;

    for(int v: adj[u]){
        if(vis[v]) continue;
        mincost = min(DFS(v,mincost),mincost);
    }

    return mincost;
}

int main(){

    int N, M, dummy;
    cin >> N >> M;
    adj = VII(N);
    vis = VI(N,0);
    cost = VUL(N);

    for(int i = 0; i < N; i++){
        cin >> dummy;
        cost[i] = dummy;
    }

    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ull sum = 0;
    for(int u = 0; u < N; u++){
        if(vis[u]) continue;
        sum += DFS(u);
    }

    cout << sum << endl;
    return 0;
}
