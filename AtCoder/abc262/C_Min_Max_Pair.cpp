// https:// atcoder.jp/contests/abc262/tasks/abc262_c
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int N;
  cin >> N;
  vector<int> numbers;
  numbers.push_back(0);
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    numbers.push_back(n);
  }

  Long good = 0;
  Long bad_can_count = 0;
  set<int> counted;
  for (int i = 1; i <= N; i++) {
    if (counted.count(i))
      continue;
    if (numbers[i] == i)
      good++;
    else if (numbers[numbers[i]] == i) {
      bad_can_count++;
      counted.insert(numbers[i]);
      counted.insert(numbers[numbers[i]]);
      // swap(numbers[i], numbers[numbers[i]]);
    }
  }

  Long answer = 0;
  if (good > 1) {
    answer += ((good * (good - 1)) / 2);
  }
  if (bad_can_count) {
    answer += bad_can_count;
  }
  // cerr << good << endl;
  // cerr << bad_can_count << endl;
  cout << answer << endl;
  return 0;
}