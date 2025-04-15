#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> numbers;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;

    numbers.push_back({n, i});
  }

  vector<int> answer(N, 0);
  sort(numbers.rbegin(), numbers.rend());

  int cur = 1;

  for (int i = 0; i < N; i++) {
    if (i == 0) {
      answer[numbers[i].second] = cur;
    } else {
      if (numbers[i].first != numbers[i - 1].first)
        cur = i + 1;
      answer[numbers[i].second] = cur;
    }
  }
  for (auto &a : answer)
    cout << a << endl;
  return 0;
}