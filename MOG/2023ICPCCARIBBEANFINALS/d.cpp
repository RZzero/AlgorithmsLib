#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<int,int>> knights;
  vector<pair<int,int>> dragons;
  vector<int> solution(3, -1);

  for (int i = 0; i < 3; i++) {
    int k; cin >> k;
    knights.push_back({ k, i });
  }

  for (int i = 0; i < 3; i++) {
    int k; cin >> k;
    dragons.push_back({ k, i });
  }

  sort(knights.begin(), knights.end(), [&] (pair<int,int> a, pair<int,int> b) {
    return a.first < b.first;
  });

  sort(dragons.begin(), dragons.end(), [&] (pair<int,int> a, pair<int,int> b) {
    return a.first < b.first;
  });

  int possible = 0;

  if (knights[0].first > dragons[0].first
    && knights[1].first > dragons[1].first) {
    solution[knights[0].second] = dragons[0].second + 1;
    solution[knights[1].second] = dragons[1].second + 1;
    solution[knights[2].second] = dragons[2].second + 1;
    possible = 1;
  } else if (knights[1].first > dragons[0].first
    && knights[2].first > dragons[1].first) {
    solution[knights[1].second] = dragons[0].second + 1;
    solution[knights[2].second] = dragons[1].second + 1;
    solution[knights[0].second] = dragons[2].second + 1;
    possible = 1;
  }
  if(possible) {
    cout << "POSSIBLE" << '\n';

    for (int i = 0; i < solution.size(); i++) {
      cout << solution[i] << " ";
    }
  } else {
    cout << "IMPOSSIBLE" << '\n'; 
  }

  return 0;
}