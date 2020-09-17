#include <bits/stdc++.h>
#define endl '\n';

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;
map<int,vector<int>> belongTo;
VI vis = VI(6 * 10e5);
VI vis_person = VI(6 * 10e5);
VII groups = VII(6 * 10e5);

int main(){
  int N, M;
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    int groupSize; cin >> groupSize;
    for(int j = 0; j < groupSize; j++){
      int member; cin >> member;
      belongTo[member - 1].push_back(i);
      groups[i].push_back(member - 1);
    }
  }

  for(int person = 2; person < N; person++){
    // Reset the vis shittes;
    // groups to visit
    queue<int> canallas;
    canallas.push(person);
    set<int> burros;

    while (canallas.size()) {
      int cur = canallas.front();
      burros.insert(cur);
      canallas.pop();
      vis_person[cur] = true;

      for(auto &group: belongTo[cur]){

        if (vis[group] || !groups[group].size()) continue;
        for(auto &pp: groups[group]) {
          canallas.push(pp);
        }
        vis[group] = true;
      }
    }
    cout << burros.size() << " ";
    vis.clear();
    vis_person.clear();
  }
  return 0;
}