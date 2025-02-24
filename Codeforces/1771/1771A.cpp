#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  map<int, int> freq;
  int mn = 1e8;
  int mx = 0;
  for (auto &n : numbers) {
    cin >> n;
    freq[n]++;
    mn = min(mn, n);
    mx = max(mx, n);
  }
  Long target = mx - mn;
  Long answer = 0;
  cerr << "target: " << target << endl;
  for (int i = 0; i < numbers.size(); i++) {
    Long cur = abs(numbers[i] - target);
    if (freq.count(cur)) {
      if (numbers[i] == cur) {
        if (freq[cur] > 1) {
          answer++;
        }
      } else {
        answer++;
      }
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