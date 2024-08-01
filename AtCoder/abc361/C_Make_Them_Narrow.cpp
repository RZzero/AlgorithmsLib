#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N, K;
  cin >> N >> K;
  vector<Long> numbers(N);
  for (auto &n : numbers)
    cin >> n;
  sort(numbers.begin(), numbers.end());

  Long answer = 1e18;
  if (N == K - 1) {
    cout << numbers[0] << endl;
    return 0;
  }

  for (int i = 0; (N - K + i - 1) < N; i++) {
    answer = min(answer, numbers[N - K + i - 1] - numbers[i]);
  }
  cout << answer << endl;
  return 0;
}