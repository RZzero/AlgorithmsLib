#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> prep(2 * 1e5 + 7);

void solve() {
  Long N;
  cin >> N;

  cout << prep[N] << endl;
}

int main() {
  int T;
  cin >> T;

  Long sum_so_far = 0;
  for (int i = 1; i <= 2 * 1e5 + 4; i++) {
    int current = i;
    Long sum = 0;
    while (current) {
      sum += current % 10;
      current /= 10;
    }
    sum_so_far += sum;
    prep[i] = sum_so_far;
  }
  while (T--) {
    solve();
  }
  return 0;
}