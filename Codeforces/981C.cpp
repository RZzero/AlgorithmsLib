#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis;
int cnt = 0;
int pointo = -1;
int maxi = 0;
vector<pair<int,int>> pairs;
int last_visited;
int first_visited;
void DFS(int u){
    vis[u] = true;
    last_visited = u;
    for(int v: adj[u]){
        if(v == pointo && pointo != -1) return;
        if(vis[v]) continue;
        DFS(v);
    }
    first_visited = u;
}
void DFScheck(int u){
    vis[u] = true;

    if(adj[u].size() > 2){
        cnt++;
        pointo = u;
    }
    
    for(int v : adj[u]){
        if(vis[v]) continue;
        DFScheck(v);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    cin >> N;

    adj = VII(N);
    vis = VI(N);

    for(int i = 0; i < N-1; i++){
        int u,v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFScheck(0);

    // cout << cnt << endl;
    if(cnt > 1){
        cout << "No" << endl;
        return 0;
    }
    
    vis = VI(N);
    
    for(int u = 0; u < N; u++){
        if(!vis[u] &&  u != pointo){
           DFS(u); 
           int pnt = (last_visited+1 == u+1 ? first_visited : last_visited);
           pairs.push_back(make_pair(pnt+1, u+1));
        }
    }
    
    cout << "Yes" << endl;
    cout << pairs.size() << endl;
    for(auto &l : pairs){
        cout << l.first << " " << l.second << endl;
    }
    
    return 0;
}
