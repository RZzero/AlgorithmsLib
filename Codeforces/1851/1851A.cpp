#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int n, m, k, H;
  map<Long, int> steps;
  cin >> n >> m >> k >> H;

  // for (int i = 1; i <= m; i++)
  //   steps[k * i]++;

  int answer = 0;
  for (int i = 0; i < n; i++) {
    int cur;
    cin >> cur;
    if (H != cur && (abs(H - cur) % k == 0) && (abs(H - cur) <= (k * (m - 1)))) {
      answer++;
    }
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}