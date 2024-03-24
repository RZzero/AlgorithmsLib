#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  numbers.push_back(0);
  vector<int> differences(N + 1);
  int answer = 0;
  int current_count = 0;
  for (int i = 0; i < N - 1; i++) {
    if (numbers[i] - numbers[i + 1] >= 0) {
      current_count += 1;
      answer = max(current_count, answer);
    } else {
      current_count = 0;
    }
  }
  cout << answer << endl;
  return 0;
}