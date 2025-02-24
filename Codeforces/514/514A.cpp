#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // If current digit >=5 replace it with 9-d;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] >= '5' && S[i] <= '9' && (!(i == 0 && S[i] == '9'))) {
      int optimized = 9 - ((int)S[i] - '0');
      // cerr << optimized << endl;
      S[i] = optimized + '0';
    }
  }
  cout << S << endl;
  return 0;
}