// https://atcoder.jp/contests/abc395/tasks/abc395_c
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, vector<int>> mapa;

  int answer = INT_MAX;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    mapa[n].push_back(i + 1);
  }

  for (auto &v : mapa) {
    if (v.second.size() > 1) {
      for (int i = 1; i < v.second.size(); i++) {
        answer = min(answer, v.second[i] - v.second[i - 1] + 1);
      }
    }
  }
  cout << (answer == INT_MAX ? -1 : answer) << endl;
  return 0;
}