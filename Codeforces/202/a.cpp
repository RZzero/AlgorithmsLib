#include <iostream>

using namespace std;

bool is_palindrome(string S) {
  if (S.size() == 1) return true;
  bool can = true;

  for (int i = 0; i < S.size() / 2; i++) {
    if (S[i] != S[S.size()-1-i]) can = false;
  }

  return can;
}

int main () {
  string S;
  cin >> S;

  string best = "";
  for (int mask = 0; mask < (1 << S.size()); mask++) {
    string current = "";
    for (int i = 0; i < S.size(); i++) {
      if (mask & (1 << i)) current+= S[i];
    }

    if (is_palindrome(current) && current > best)
      best = current;
  }
  cout << best << endl;
  return 0;
}