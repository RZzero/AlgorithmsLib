#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string S;
  cin >> A >> B >> S;

  bool has_hyphen = false;
  bool other_ar_number = true;

  for (int i = 0; i < S.size(); i++) {
    if (i == A && S[i] == '-')
      has_hyphen = true;
    else
      other_ar_number &= (S[i] >= '0' && S[i] <= '9');
  }
  cout << (has_hyphen && other_ar_number ? "Yes" : "No") << endl;
  return 0;
}