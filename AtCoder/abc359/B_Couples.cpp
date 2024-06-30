// https://atcoder.jp/contests/abc359/tasks/abc359_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers(2 * N);
  for (auto &n : numbers)
    cin >> n;

  int cnt = 0;
  int length = ((N * 2) - 2);
  for (int i = 0; i < length; i++) {
    if (numbers[i] == numbers[i + 2])
      cnt++;
  }

  cout << cnt << endl;
  return 0;
}