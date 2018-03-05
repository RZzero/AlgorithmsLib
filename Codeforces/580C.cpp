#include <bits/stdc++.h>

using namespace std; 
typedef vector<int> VI;
typedef vector<VI> VII;
VII adj;
VI par;
VI cats;
VI catsMe;

int OK;

void DFS(int u, int p = -1, int catsQtty = 0){
    par[u] = p;
    catsMe[u] = cats[u] == 0 ? 0 : catsQtty+1;

    if(catsMe[u] <= OK){

        for(int v : adj[u]){
            if(v == p) continue;
            DFS(v,u,catsMe[u]);
        }
    }

}

int main(){
    int N;
    cin >> N >> OK;

    cats = VI(N);
    par = VI(N);
    adj = VII(N);
    catsMe = VI(N,(int)1e9);

    for(int u = 0; u < N; u++){
        int dummy; cin >> dummy;
        cats[u] = dummy;
    }

    for(int i = 0; i < N-1; i++){
        int u,v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFS(0);
    

    //Just need to detect leaves and count
    int cnt = 0;
    for(int u = 0; u < N; u++){
        if(adj[u].size() == 1 && par[u] == adj[u][0]){
            // cout << "Im a leaf " << u << endl;
            if(catsMe[u] <= OK){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
