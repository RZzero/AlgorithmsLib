#include <bits/stdc++.h>
using namespace std;

using Long = long long;

void solve() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  map<int, int> frq;
  int most_reps = 0;
  for (auto &n : numbers) {
    cin >> n;
    frq[n]++;
    most_reps = max(most_reps, frq[n]);
  }

  cout << N - most_reps << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}