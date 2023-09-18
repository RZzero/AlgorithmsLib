#include <bits/stdc++.h>

using namespace std;

int main () {
  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);
  int N, K;
  cin >> N >> K;

  vector<int> numbers(N);
  for (auto &n: numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());
  int answer = N > 0 ? 1 : 0;
  for (int i = 0; i < N; i++) {
    int cnt = 1;
    for (int j = i+1; j < N; j++) {
      if (abs(numbers[i]-numbers[j]) <= K)
        cnt++;
    }
    answer = max(answer, cnt);
  }

  cout << answer << endl;
  return 0;
}