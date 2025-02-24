#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  map<char, int> freq;
  for (auto &s : S) {
    freq[s]++;
  }

  int answer = 0;
  for (auto &[el, count] : freq) {
    if (count >= el - 'A' + 1) {
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