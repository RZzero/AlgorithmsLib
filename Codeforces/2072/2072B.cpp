#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  string S;
  cin >> N >> S;

  int medias = 0, bajitas = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == '-')
      medias++;
    else
      bajitas++;
  }

  if (medias < 2 or !bajitas)
    cout << 0 << endl;
  else {
    // 10 _ - _ - _ - _ - _ -
    // 9 --__-_---

    bool odd = medias % 2 == 1;
    Long left = (medias / 2) + odd;
    Long rigt = medias / 2;

    cout << left * bajitas * rigt << endl;
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