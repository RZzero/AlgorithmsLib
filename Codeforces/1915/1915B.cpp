#include <bits/stdc++.h>
using namespace std;

void solve() {
  string cur;
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < 3; i++) {
    cin >> cur;
    for (auto &cu : cur) {
      if (cu == 'A')
        a++;
      if (cu == 'B')
        b++;
      if (cu == 'C')
        c++;
    }
  }

  if (a == 2)
    cout << "A" << endl;
  else if (b == 2)
    cout << "B" << endl;
  else if (c == 2)
    cout << "C" << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}