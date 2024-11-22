#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int start_one = 0, start_zero = 0;
  char for_one = '1', for_zero = '0';

  for (int i = 0; i < S.size(); i++) {
    if (S[i] != for_one) {
      start_one++;
    }
    if (S[i] != for_zero) {
      start_zero++;
    }

    for_one = for_one == '1' ? '0' : '1';
    for_zero = for_zero == '1' ? '0' : '1';
  }

  cout << min(start_one, start_zero) << endl;
  return 0;
}