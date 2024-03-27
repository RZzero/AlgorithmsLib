#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool initial_capitalized = (S[0] < 'a');
  bool mins = true;
  for (int i = 1; i < S.size(); i++) {
    if (S[i] < 'a') {
      mins = false;
      break;
    }
  }
  cout << (initial_capitalized && mins ? "Yes" : "No") << endl;
  return 0;
}