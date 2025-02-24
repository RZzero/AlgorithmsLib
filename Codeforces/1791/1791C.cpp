#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int size_of_s = S.size();

  if (S[0] == S[size_of_s - 1]) {
    cout << size_of_s << endl;
  } else {
    int cnt = 0;
    for (int i = 0; i < size_of_s / 2 && S[i] != S[size_of_s - 1 - i]; i++) {
      cnt += 2;
    }
    cout << size_of_s - cnt << endl;
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