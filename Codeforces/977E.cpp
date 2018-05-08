#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
VII adj;
VI vis;

bool DFS(int u, bool isCyclic = true){
    vis[u] = true;
    
    if(adj[u].size() != 2)
        isCyclic = false;
        
    for(int v: adj[u]){
        if(!vis[v])
            isCyclic = DFS(v, isCyclic);
    }

    return isCyclic;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, E, u, v;
    cin >> N >> E;
    
    adj = VII(N);
    vis = VI(N);
    for(int i = 0; i < E; i++){
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cyclic_components = 0;
    for(int u = 0; u < N; u++){
        if(!vis[u])
            if(DFS(u))
                cyclic_components++;
    }

    cout << cyclic_components << endl;
    return 0;
}
