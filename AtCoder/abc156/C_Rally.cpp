#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int N;
  cin >> N;

  vector<int> coordinates(N);
  Long answer = 1e18;
  for (auto &c : coordinates)
    cin >> c;

  for (int i = 0; i <= 100; i++) {
    Long cur_answer = 0;
    for (auto &c : coordinates) {
      cur_answer += (c - i) * (c - i);
    }
    answer = min(answer, cur_answer);
  }

  cout << answer << endl;
  return 0;
}