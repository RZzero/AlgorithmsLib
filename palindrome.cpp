#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string word) {
  bool can = true;

  for (int i = 0; i < word.size() / 2; i++) {
    cout << "word[i] " << word[i] << " ";
    if (word[i] != word[word.size() - i - 1]) {
      can = false;
      break;
    }
  }
  
  if (can) return true;
  return false;
}

int main () {
  string s;
  cin >> s;
  if (isPalindrome(s)) cout << "The word " << s << " is a palindrome";
  else cout << s << " is not a palindrome" << endl;
  return 0;
}