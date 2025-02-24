#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> gives;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  map<int, int> mapa;
  int zeroes = 0;
  bool has_equal = false;
  for (auto &n : numbers) {
    cin >> n;
    mapa[n]++;
    if (mapa[n] > 1) {
      has_equal = true;
    }
    if (!n)
      zeroes++;
  }

  if (zeroes) {
    cout << N - zeroes << endl;
  } else if (has_equal) {
    cout << N << endl;
  } else {
    cout << N + 1 << endl;
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