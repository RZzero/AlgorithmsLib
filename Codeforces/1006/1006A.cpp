#include <bits/stdc++.h>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI initial_time;
VI end_time;
VI utime;
int cur_time = 1;

void DFS(int u){
  initial_time[u] = cur_time;
  utime[cur_time] = u;

  for(int v: adj[u]){
    cur_time++;
    DFS(v);
  }

  end_time[u] = cur_time;
}

int main(){
  int N, Q, dum;

  cin >> N >> Q;

  adj = VII(N + 1);
  initial_time = VI(N + 1);
  end_time = VI(N + 1);
  utime = VI(N + 1);

  for(int i = 2; i <= N; i++){
    int dum; cin >> dum;
    adj[dum].push_back(i);
  }

  DFS(1);

  for(int i = 0; i < Q; i++){
    int u, k;
    cin >> u >> k;

    // if subtree_size(u) + 1 < k => -1
    if(end_time[u]-initial_time[u] + 1 < k){
      cout << -1 << endl;
    }else{
      cout << utime[initial_time[u] + k - 1] << endl;
    }
  }

  return 0;
}