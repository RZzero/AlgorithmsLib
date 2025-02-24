#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;

  int A, B;
  const int size_of_s = (int)S.size();
  A = B = -1;

  for (int i = 0; i < size_of_s - 1; i++) {
    int cur_a = -1;
    int cur_b = -1;
    if (S[i + 1] == '0')
      continue;
    for (int j = i + 1; j < size_of_s; j++) {
      cur_a = stoi(S.substr(0, i + 1));
      cur_b = stoi(S.substr(j));
      if (cur_b > cur_a) {
        A = cur_a;
        B = cur_b;
        break;
      }
    }
    if (A != -1)
      break;
  }

  bool can = A != -1 && B != -1;
  if (can) {
    cout << A << " " << B << endl;
  } else {
    cout << -1 << endl;
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}