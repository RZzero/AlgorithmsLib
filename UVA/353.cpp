// https://onlinejudge.org/external/3/353.pdf

#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string &S) {
  bool can = true;
  int size_of_s = S.size();
  for (int i = 0; i < size_of_s/2; i++) {
    if (S[i] != S[size_of_s-1-i])
      can = false;
  }
  return can;
}

int main() {

  string S;
  while (cin >> S) {
    set<string> palindromes;
    int cnt = 0;
    for (int i = 0; i < S.size(); i++) {
      string current_string = "";
      for (int j = i; j < S.size(); j++) {
        current_string += S[j];
        if (is_palindrome(current_string)) {
          cnt++;
          palindromes.insert(current_string);
        }
      }
    }
    cout << "The string '" << S << "' contains " << palindromes.size() << " palindromes." << endl;
  }
  return 0;
}
