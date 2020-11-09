#include <bits/stdc++.h>

using namespace std;

int main () {
  int n = 16;

  int ones = 0;
  if (n < 0) return false;
  while (n) {
      if (n & 1) ones++;
      n >>= 1;
  }

  cout << (ones == 1) << endl;
  return 0;
}
