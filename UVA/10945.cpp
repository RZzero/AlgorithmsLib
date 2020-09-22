// https://onlinejudge.org/external/109/10945.pdf
#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string &S) {
  bool can = true;
  int size_of_s = S.size();
  for (int i = 0; i < size_of_s; i++) {
    if (S[i] != S[size_of_s-i-1])
      can = false;
  }
  return can;
}

int main() {
  string S;

  while (getline(cin, S)) {
    if (S == "DONE") break;
    
    string lower_cased = "";
    for (auto c: S) {
      char lowered = tolower(c);
      if (lowered >= 'a' && lowered <= 'z') {
        lower_cased += lowered;
      }
    }
    
    if (is_palindrome(lower_cased)) {
      cout << "You won't be eaten!" << endl;
    } else {
      cout << "Uh oh.." << endl;
    }
  }
  return 0;
}

