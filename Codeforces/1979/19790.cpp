#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (auto &n : numbers)
      cin >> n;

    int answer = 1e9 * 2;

    for (int i = 1; i < N; i++) {
      answer = min(answer, max(numbers[i - 1], numbers[i]));
    }
    cout << answer - 1 << endl;
  }
  return 0;
}