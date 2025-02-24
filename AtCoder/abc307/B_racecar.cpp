// https://atcoder.jp/contests/abc307/tasks/abc307_b
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s) {
  bool can = true;
  int size_of_s = s.size();
  for (int i = 0; can && i < size_of_s / 2; i++) {
    can &= s[i] == s[size_of_s - i - 1];
  }
  return can;
}
int main() {
  int N;
  cin >> N;
  vector<string> strings;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    strings.push_back(s);
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j)
        continue;
      string new_s = strings[i] + strings[j];
      cnt += is_palindrome(new_s);
      if (cnt) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    if (cnt)
      break;
  }
  cout << "No" << endl;
  return 0;
}