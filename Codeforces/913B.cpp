#include <bits/stdc++.h>

using namespace std; 
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI par;
set<int> leaves;

void DFS(int u, int p = -1){

    for(int v: adj[u]){
        if(u == v)continue;
        DFS(v,u);
    }
    
    if( ((adj[u].size() == 0) || (adj[u].size() == 1 && adj[u][0] == p)) && p!=-1){
        leaves.insert(u);
        par[p]++;
    }
}

int main(){

    int N, father;
    cin >> N;

    adj = VII(N);
    par = VI(N,0);
    for(int i = 1; i < N; i++){
        cin >> father; father--;
        adj[father].push_back(i);
    }

    DFS(0);

    bool can = true;
    for(int i = 0; i < N; i++){
        if(leaves.count(i) > 0)continue;
        if(par[i] < 3) can = false; 
    }

    cout << (can ? "Yes" : "No") << endl;

    return 0;
}
