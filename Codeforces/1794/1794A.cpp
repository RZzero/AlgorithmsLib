#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
  bool can = true;
  int size_of_s = s.size();
  for (int i = 0; i < size_of_s / 2; i++) {
    if (s[i] != s[size_of_s - i - 1]) {
      can = false;
      break;
    }
  }

  return can;
}
void solve() {
  int N;
  cin >> N;
  vector<string> subs;
  int searching = (N * 2) - 2;
  for (int i = 0; i < searching; i++) {
    string s;
    cin >> s;
    subs.push_back(s);
  }

  sort(subs.begin(), subs.end(), [&](string &a, string &b) -> bool {
    return a.size() < b.size();
  });

  bool can = true;
  for (int i = 0; i < searching; i += 2) {
    string s = subs[i];
    string t = subs[i + 1];
    reverse(t.begin(), t.end());
    if (s != t) {
      can = false;
      break;
    }
  }
  cout << (can ? "YES" : "NO") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}