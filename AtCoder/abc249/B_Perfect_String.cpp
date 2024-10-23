#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool has_upper, has_lower, pair_wise;
  has_upper = has_lower = false;
  pair_wise = true;
  set<char> chars;

  for (auto &c : S) {
    if (c >= 'A' && c <= 'Z')
      has_upper |= true;
    if (c >= 'a' && c <= 'z')
      has_lower |= true;
    chars.insert(c);
  }

  if (has_lower && has_upper && chars.size() == S.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}