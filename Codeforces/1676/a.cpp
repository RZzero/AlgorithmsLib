#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string S;
    cin >> S;

    int sum = 0;
    int first_half = 0;
    int second_half = 0;

    for (int i = 0; i < S.size(); i++) {
      if (i < 3) first_half += (int)S[i];
      else second_half += (int)S[i];
    }

    cout << (first_half == second_half ? "YES" : "NO") << endl;

  }
  return 0;
}