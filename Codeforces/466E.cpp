#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

const int SIZE = 2 * 1e5; 
int PAR[SIZE] = { 0 };
int dfs_time = -1;
int start_time[SIZE];
int end_time[SIZE];
VII adj;
VI vis;
VI has_parent;

struct Query { int id, type, x, y, answer = -1; };

int find_set(int u){
  return u == PAR[u] ? u : PAR[u] = find_set(PAR[u]);
}

void make_set(int u){
  PAR[u] = u;
}

bool union_set(int u, int v){
  bool ok = false;
  if(u > v) swap(u,v);
  int parent_u = find_set(u);
  int parent_v = find_set(v);
  if(parent_u != parent_v){
    PAR[parent_v] = parent_u;
    ok = true;
  }

  return ok;
}

void DFS(int u) {
  start_time[u] = ++dfs_time;
  vis[u] = 1;
  for(auto v: adj[u]) {
    if (vis[v]) continue;
    DFS(v);
  }
  end_time[u] = dfs_time;
}

int main () {
  int N, M;
  cin >> N >> M;
  vector<Query> Queries;
  vector<vector<int>> TABLE(SIZE);
  adj = VII(N + 1);
  vis = VI(N + 1);
  has_parent = VI(N + 1);
  VI packets = VI(SIZE , 0);
  for(int i = 0 ; i < M; i++){
    int type, x,y;
    cin >> type;
    if(type == 1){
      cin >> x >> y;
      Queries.push_back({ i+1, 1, x, y, 0});
      adj[x].push_back(y);
      adj[y].push_back(x);
      has_parent[x] = true;
      make_set(x);
      make_set(y);
    }else if (type == 2){
      cin >> x;
      //TODO: CHECK
      Queries.push_back({ i+1, 2, x, 0, 0});
    }else if(type == 3){
      cin >> x >> y;
      Queries.push_back({ i+1, 3, x, y, 0 });
      TABLE[y].push_back(i+1);
    }
  }

  int current_package = 1;
  for(auto &Query: Queries){
    if (Query.type == 1) {
      // Union
      union_set(Query.x, Query.y);
    }else if (Query.type == 2){
      // A package has a arrived to the employee x
      // Answer all the queries related to package y
      for(int i = 0; i < TABLE[current_package].size(); i++){
        // If x is in same component of v (from table) MAYBE YES otherwise NO
        auto &current_query = Queries[TABLE[current_package][i] - 1];
        if(find_set(Query.x) == find_set(current_query.x) && find_set(Query.x) != 0) {
          Queries[TABLE[current_package][i] - 1].answer = 1;
        } else {
          Queries[TABLE[current_package][i] - 1].answer = 0;
        }
      }

      packets[current_package] = Query.x;
      current_package++;
    }
  }

  // Run Euler tour to determine if aMAYBEs can be aYES ... 
  for(int u = 1; u <= N; u++){
    if(!vis[u] && !has_parent[u])
      DFS(u);
  }

  for(auto query: Queries){
    if(query.type != 3) continue;
    if (!query.answer && packets[query.y] != query.x) {
      cout << "NO" << endl;
      continue;
    }
    if((start_time[packets[query.y]] >= start_time[query.x] && end_time[packets[query.y]] <= end_time[query.x])
      || (packets[query.y] == query.x)){
      cout << "YES" << endl;
    }else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
//I GOT IT!!!