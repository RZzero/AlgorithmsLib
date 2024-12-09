#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool is_vowel(char &c) {
  return c == 'a' || c == 'e';
}

void solve() {
  int N;
  cin >> N;
  string s;
  cin >> s;

  string answer = "";
  reverse(s.begin(), s.end());
  // cerr << s << endl;
  for (int i = 0; i < s.size();) {
    if (!is_vowel(s[i])) {
      answer += s[i];
      answer += s[i + 1];
      answer += s[i + 2];
      answer += '.';
      i += 3;
    } else {
      answer += s[i];
      answer += s[i + 1];
      answer += '.';
      i += 2;
    }
  }

  answer.pop_back();
  reverse(answer.begin(), answer.end());

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