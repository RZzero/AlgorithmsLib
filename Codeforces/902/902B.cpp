#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
VII adj;
VI vis;
VI depth;
VI cur_color;
VI desired_color;

void DFS1(int u, int depthh = -1){
    vis[u] = true;
    depth[u] = depthh+1;

    for(int v: adj[u]){
        if(vis[v]) continue;
        DFS1(v,depth[u]);
    }
}

void DFS2(int u, int color_of_father){
    cur_color[u] = color_of_father;
    for(int v: adj[u]){
        if(depth[u] > depth[v])continue;
        DFS2(v,color_of_father);
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    cin >> N;
    adj = VII(N);
    cur_color = VI(N,0);
    desired_color = VI(N,0);
    vis = VI(N,0);
    depth = VI(N,0);

    for(int i = 1; i < N; i++){
        int u; cin >> u; u--;
        adj[i].push_back(u);
        adj[u].push_back(i);
    }

    for(int i = 0; i < N; i++){
        int dum; cin >> dum;
        desired_color[i] = dum;
    }

    DFS1(0);

    VII cur_depth = VII(N);
    int anw = 0;

    for(int i = 0; i < depth.size(); i++){
        // cout << depth[i] << endl;
        cur_depth[depth[i]].push_back(i);
    }

    for(int i = 0; i < cur_depth.size(); i++){
        for(int u = 0; u < cur_depth[i].size(); u++){
            if(cur_color[cur_depth[i][u]]==desired_color[cur_depth[i][u]])continue;

            DFS2(cur_depth[i][u], desired_color[cur_depth[i][u]]);
            anw++;
        }
    }

    cout << anw << endl;
    return 0;
}
