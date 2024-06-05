#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
  int N;
  cin >> N;
  vector<int> pos(N);
  for (auto &p : pos)
    cin >> p;

  vector<string> cows(N);
  for (auto &c : cows)
    cin >> c;

  vector<string> answer(N);

  for (int i = 0; i < 3; i++) {
    for (int i = 0; i < pos.size(); i++) {
      answer[i] = cows[pos[i] - 1];
    }
    cows = answer;
  }

  for (auto &n : answer)
    cout << n << endl;
  return 0;
}