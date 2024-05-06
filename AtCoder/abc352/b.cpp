#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  string T;
  cin >> S >> T;

  for (int i = 0, j = 0; i < S.size(); i++, j++) {
    while (S[i] != T[j] && j < T.size()) {
      j++;
    }
    if (S[i] == T[j]) {
      cout << j + 1 << " ";
    }
  }
  return 0;
}