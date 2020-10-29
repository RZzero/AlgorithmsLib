#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string S) {
  bool answer = true;
  for(int i = 0; i < S.size() / 2; i++) {
    if (S[i] != S[S.size()-1-i])
      answer = false;
  }
  return answer;
}

string cleanString(string S) {
  string new_S = "";
  for(auto &c: S) {
    char lowered_c = tolower(c);
    if ((lowered_c >= '0' && lowered_c <= '9')
      || (lowered_c >= 'a' && lowered_c <= 'z')) {
        new_S += lowered_c;
      }
  }
  return new_S;
}
int main() {
  string cur = "A man, a plan, a canal: Panama";

  cout << is_palindrome(cleanString(cur)) << endl;

  return 0;
}