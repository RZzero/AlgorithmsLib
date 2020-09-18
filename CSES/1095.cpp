// https://cses.fi/problemset/task/1095
// WIP: Not Accepted
#include <iostream>

using namespace std;
typedef long long Long;

const Long MOD = 1e9 + 7;

Long power_mod(Long base, Long exponent) {
  if (exponent == 0) return 1 % MOD;
  Long res = power_mod(base, exponent / 2) % MOD;

  if (exponent & 1)
    return (res * res * base) % MOD;
  
  return (res * res) % MOD;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Long T;
  cin >> T;
  while (T--) {
    Long base, exponent;
    cin >> base >> exponent;

    cout << (power_mod(base, exponent) % MOD) << endl;
  }

  return 0;
}