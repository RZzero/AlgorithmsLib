// https://www.spoj.com/problems/LASTDIG/

#include <iostream>

using namespace std;
typedef long long Long;

Long MODU = 10;

Long bin_pow(Long base, Long exponent, Long &MOD) {
  if (exponent == 0) return 1;
  
  Long res = bin_pow(base, exponent / 2, MOD) % MOD;

  if (exponent & 1) return (res * res * base) % MOD;

  return (res * res) % MOD;
}

int main () {
  ios_base:: sync_with_stdio(0);
  cin.tie(NULL);

  int T;
  cin >> T;

  while (T--) {
    Long base, exponent;
    cin >> base >> exponent;

    if (base == 0) cout << 0 << endl;
    else cout << bin_pow(base, exponent, MODU) << endl;
  }
  return 0;
}
