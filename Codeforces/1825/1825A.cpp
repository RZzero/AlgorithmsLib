#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  auto are_all_equal = [&](const string S) -> bool {
    bool all_equal = true;
    for (int i = 1; i < S.size(); i++) {
      if (S[i - 1] != S[i]) {
        all_equal = false;
        break;
      }
    }
    return all_equal;
  };

  while (T--) {
    string S;
    cin >> S;

    cout << (are_all_equal(S) ? -1 : static_cast<int>(S.size() - 1)) << endl;
  }
  return 0;
}