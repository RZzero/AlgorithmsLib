#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N + 1);
  for (int &n : numbers)
    cin >> n;

  cout << N << endl;
  for (auto &n : numbers)
    cout << n << " ";
  cout << endl;

  cout << 0 << endl;
  cout << 1 << endl;
}

int main() {
  int T = 1;
  while (T--) {
    solve();
  }
  return 0;
}