#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N;

  cin >> N;
  vector<Long> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  Long cur = numbers[0];
  Long answer = numbers[0];

  for (int i = 1; i < numbers.size(); i++) {
    cur = max(numbers[i], numbers[i] + cur);
    answer = max(cur, answer);
  }
  cout << answer << endl;
  return 0;
}