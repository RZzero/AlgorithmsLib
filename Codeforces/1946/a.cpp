#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (auto &n : numbers) {
      cin >> n;
    }

    sort(numbers.begin(), numbers.end());
    int answer = 0;
    if (N == 1) {
      cout << 1 << endl;
      continue;
    } else {
      int middle = N % 2 == 0 ? N / 2 : N / 2 + 1;
      int initial = numbers[middle - 1];
      for (int i = middle - 1; i < N && numbers[i] == initial; i++) {
        answer++;
      }
      cout << answer << endl;
    }
  }
  return 0;
}