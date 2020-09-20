// https://onlinejudge.org/external/122/12289.pdf
#include <bits/stdc++.h>

using namespace std;
vector<string> numbers = { "one", "two", "three" };

int main() {
  int T;
  cin >> T;
  while (T--) {
    string S;
    cin >> S;
    if (S.size() == 5) {
      cout << 3 << endl;
    } else {
      int cnt1 = 0, cnt2 = 0;
      for (int i = 0; i < 3; i++) {
        if (S[i] == numbers[0][i])cnt1++;
        else if (S[i] == numbers[1][i])cnt2++;
      }
      if (cnt1 > cnt2) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }
  return 0;
}
