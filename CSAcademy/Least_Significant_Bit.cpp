#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int x;
    cin >> x;

    int answer = 0;
    int cnt = 0;
    while (x) {
      cnt++;
      if (x & 1) {
        break;
      }
      x = (x >> 1);
    }

    answer = pow(2, cnt - 1);
    cout << answer << endl;
  }
  return 0;
}