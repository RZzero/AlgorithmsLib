#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
  string original = s;
  reverse(s.begin(), s.end());
  return s == original;
}

int main() {
  int A, B;
  cin >> A >> B;

  int answer = 0;
  for (int i = A; i <= B; i++) {
    if (is_palindrome(to_string(i)))
      answer++;
  }

  cout << answer << endl;
  return 0;
}