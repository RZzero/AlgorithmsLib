// https://cses.fi/problemset/task/1617
#include <iostream>

using namespace std;
typedef long long Long;
const Long MOD = 1e9 +7;

Long bin_pow(Long base, Long expo) {
  if (expo == 0) return 1;

  Long res = bin_pow(base, expo/2) % MOD;

  if (expo & 1) 
    return (res * res * base) % MOD;
  else
    return (res * res) % MOD;
}

int main() {
  Long N;
  cin >> N;

  cout << bin_pow(2, N) << endl;
  return 0;
}
