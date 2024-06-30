#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> aliens;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int q;
    cin >> q;
    if (M < q)
      break;
    if (M >= q && M > 0) {
      M -= q;
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}