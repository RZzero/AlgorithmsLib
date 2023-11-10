#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;
    string answer = "";
    if (!b) {
      for (int i = 0; i <= a && a; i++) {
        answer += '0';
      }
      for (int i = 0; i <= c && c; i++) {
        answer += '1';
      }
    } else {
      for (int i = 0; i < (a + 1) && a; i++) {
        answer += '0';
      }
      for (int i = 0; i < (c + 1) && c; i++) {
        if (i == 0 && b && a) b--;
        answer += '1';
      }

      bool intercalate = !c;

      for (int i = 0; i < ((!a && !c) ? b + 1 : b) && b; i++) {
        answer += intercalate ? '1' : '0';
        intercalate = !intercalate;
      }
    }
    cout << answer << endl;
  }
  return 0;
}