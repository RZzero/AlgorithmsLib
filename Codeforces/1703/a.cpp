#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  auto lower_case_string = [&](string s) -> string {
    string new_s = "";
    for (auto &c : s) {
      new_s += tolower(c);
    }
    return new_s;
  };

  while (T--) {
    string S;
    cin >> S;

    cout << (lower_case_string(S) == "yes" ? "yes" : "no") << endl;
  }
  return 0;
}