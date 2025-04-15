// https://atcoder.jp/contests/abc395/tasks/abc395_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers(N);

  for (int i = 0; i < N; i++) {
    cin >> numbers[i];
  }

  bool can = true;
  for (int i = 1; i < N; i++) {
    can &= numbers[i] > numbers[i - 1];
  }
  cout << (can ? "Yes" : "No") << endl;

  return 0;
}