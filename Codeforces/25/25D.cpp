#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

struct Road { int u, v; };
struct Answer {
  int u, v, n, m;
  string toString() {
    return to_string(u) +  " " + to_string(v) + " " + to_string(n) + " " + to_string(m);
  }
};

const int SIZE = 2 * 1e3; 
int PAR[SIZE] = { 0 };

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

int main(){
  int N;
  cin >> N;
  vector<Road> Roads;
  for(int u = 1; u <= N; u++) { make_set(u); }

  for(int i = 0; i < N-1; i++){
    int u,v;
    cin >> u >> v;
    Roads.push_back({ u,v });
  }

  for (int u = 1; u <= N; u++) { ; }

  vector<Road> to_delete;
  for(auto &road: Roads){
    if (find_set(road.u) == find_set(road.v)) {
      to_delete.push_back({ road.u, road.v });
    }else {
      union_set(road.u, road.v);
    }
  }

  int answer_cnt = 0;
  vector<Answer> answers;
  int to_delete_it = 0;

  for(auto &road: Roads){
    if (find_set(1) != find_set(road.u)) {
      answers.push_back({ to_delete[to_delete_it].u, to_delete[to_delete_it].v, 1, road.u });
      union_set(1,road.u);
      answer_cnt++;
      to_delete_it++;
    }
  }

  // Check cities without roads in the input
  for(int u = 2; u <= N; u++){
    if (find_set(u) != find_set(1)) {
      answers.push_back({ to_delete[to_delete_it].u, to_delete[to_delete_it].v, find_set(1), u });
      union_set(find_set(1),u);
      answer_cnt++;
      to_delete_it++;
    }
  }

  cout << answer_cnt << endl;
  for(auto &answer: answers){
    cout << answer.toString() << endl;
  }
  return 0;
}