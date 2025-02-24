// https://atcoder.jp/contests/abc307/tasks/abc307_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;
  for (int i = 0; i < N * 7; i++) {
    int n;
    cin >> n;
    sum += n;
    if ((i + 1) % 7 == 0) {
      cout << sum << " ";
      sum = 0;
    }
  }
  return 0;
}