#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N, T;
  cin >> N >> T;
  vector<Long> books(N);
  for (auto &b : books)
    cin >> b;

  vector<Long> PS(N + 1, 0);
  for (int i = 1; i <= N; i++) {
    PS[i] = PS[i - 1] + books[i - 1];
  }

  // cerr << "PS: ";
  // for (auto &el : PS)
  //   cerr << el << " ";
  // cerr << endl;
  Long answer = 0;
  for (int i = 0; i <= N; i++) {
    auto my_begin = PS.begin() + i;
    auto it = upper_bound(my_begin, PS.end(), PS[i] + T);
    if (it == PS.end() || (it != PS.end() && *it > PS[i] + T)) {
      it--;
    }

    // cerr << (it - my_begin) << endl;
    // cerr << *(PS.begin() + i) - it << endl;
    answer = max(answer, (it - my_begin) * 1LL);
  }
  cout << answer << endl;
}

int main() {
  int T;
  // cin >> T;
  T = 1;
  while (T--) {
    solve();
  }
}