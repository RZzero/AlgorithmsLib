#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int n;
  cin >> n;

  int for_fifteen = n / 15;

  int answer = 0;

  int mod = n % 15;

  vector<int> restos = {2, 1, 0};
  int resto = mod > 2 ? restos[2] : restos[mod % 3];
  answer += 3 + (for_fifteen * 3) - resto;

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  // for (int i = 0; i <= 120; i++) {
  //   if (i % 3 == i % 5) {
  //     cerr << i << endl;
  //   }
  // }
  while (T--) {
    solve();
  }
  return 0;
}