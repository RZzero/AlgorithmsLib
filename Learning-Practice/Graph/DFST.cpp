#include <bits/stdc++.h>

using namespace std; 
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI par;
VI dis; 

// DFS(TREE) That complete the list of parents and distance from root
void DFSP(int u, int p = -1, int d =0){
    par[u] = p;
    dis[u] = d;

    for(int v: adj[u]){
        if(v == p) continue;
        DFSP(v,u,d+1);
    }

}

int main(){

    int N, E, u,v;
    cin >> N >> E;
    
    adj = VII(N);
    par = VI(N);
    dis = VI(N);

    for(int i = 0; i < E; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    

    /*
        DFSP(TREE)
    */

    DFSP(0);

    
    //Parents
    for(int u = 0; u < N; u++){
        cout << par[u] << " : I'm your father ->" << u << endl;
        cout << "Distance from root " << dis[u] << endl;
    }
    

    //Let's find those leaves

    for(int u = 0; u < N; u++){
        if(adj[u].size() == 1 && par[u] == adj[u][0])
            cout << u << " I'm a boss a$$ leaf" << endl;
    }



    return 0;
}


/*
    /////////////
       Example for tree
    ////////////

8 7
0 1
0 5
7 5
5 6
1 2
1 4
1 3


*/