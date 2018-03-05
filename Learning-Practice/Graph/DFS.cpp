#include <bits/stdc++.h>

using namespace std; 
typedef vector<int> VI;
typedef vector<VI> VII;
int num_componentes;
int cantidad_nodos;
VII adj;
VI vis;

void DFS(int u){
    for(int v: adj[u]){
        if(vis[v]) continue;
        cantidad_nodos++;
        vis[v] = true;
        DFS(v);
    }
}

int main(){

    int N, E, u,v;
    cin >> N >> E;
    
    vis = VI(N); 
    adj = VII(N);

    for(int i = 0; i < E; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    /*
        PRINT ADJACENCY LIST
    */

    cout << "ADJACENCY LIST" << endl;
    for(int u = 0; u < N; u++){
        cout << u;
        for(int v: adj[u]){
            cout << " -> "<< v;
        }
        cout << ""<<endl;
    }
    cout << " " << endl;
    
    /*
        COUNT CONNECTED COMPONENTS
    */

    num_componentes = 0;
    cantidad_nodos = 0;
    for(int u =0; u < N; u++){
        if(!vis[u]){
            DFS(u);
            num_componentes++;
            cout << "component # " << num_componentes <<" has "  << cantidad_nodos << " nodes" << endl;
            cantidad_nodos = 0;
        }
    }

    return 0;
}


/*
    /////////////
       Example for graph and count components
    ////////////

10 8
0 1
0 5
7 5
5 6
1 2
1 4
1 3
9 8

*/