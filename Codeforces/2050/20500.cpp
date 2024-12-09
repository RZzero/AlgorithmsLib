#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  int answer = 0;
  vector<string> words(n);
  for (auto &w : words)
    cin >> w;

  string formatted = "";
  for (int i = 0; i < words.size(); i++) {
    string cur = formatted + words[i];

    if (cur.size() <= m) {
      answer++;
      formatted = cur;
    } else {
      break;
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