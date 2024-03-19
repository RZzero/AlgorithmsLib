#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int answer = 0;
  for (int i = 0; i < S.size(); i++) {
    answer += S[i] == T[i];
  }
  cout << answer << endl;
  return 0;
}