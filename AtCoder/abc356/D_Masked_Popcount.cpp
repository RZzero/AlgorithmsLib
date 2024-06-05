#include <bits/stdc++.h>

using namespace std;
using Long = long long;
Long MOD = 998244353;

vector<Long> get_powers_of_two() {
  vector<Long> powers;
  for (Long i = 0; i <= 60; i++) {
    powers.push_back(pow(2, i));
  }
  return powers;
}

int main() {
  Long N, M;
  cin >> N >> M;

  for (int i = 0; i < 50; i++) {
    bitset<16> bset(i);
    cout << bset << endl;
  }

  // if (!N || !M) {
  //   cout << 0 << endl;
  //   return 0;
  // }
  // vector<Long> my_powers = get_powers_of_two();

  // Long answer = 0;

  // if (N > M) {

  // } else {
  // }
  // cout << answer % MOD << endl;
  return 0;
}