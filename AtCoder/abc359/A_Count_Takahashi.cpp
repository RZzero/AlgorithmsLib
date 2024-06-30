// https://atcoder.jp/contests/abc359/tasks/abc359_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  int cnt = 0;
  while (T--) {
    string S;
    cin >> S;
    if (S == "Takahashi")
      cnt++;
  }

  cout << cnt << endl;
  return 0;
}