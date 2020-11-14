#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> items = {{1,91},{1,92},{2,93},{2,97},{1,60},{2,77},{1,65},{1,87},{1,100},{2,100},{2,76}};
  map<int, priority_queue<int>> mapa;

  for (auto &element: items) {
    mapa[element[0]].push(element[1]);
  }

  vector<vector<int>> answer;
  for (auto &element: mapa) {
    int sum = 0;
    vector<int> current;

    for (int i = 0; i < 5; i++) {
      sum += element.second.top();
      element.second.pop();
    }

    current.push_back(element.first);
    current.push_back(sum/5);
    answer.push_back(current);
  }

  // print answer
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i][0] << " " << answer[i][1] << endl;
  }
  return 0;
}
