#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
long long limit = 1e10 + 4;

long long binpow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}

int main(){
  ll N, K;
  cin >> N >> K;
  map<ll,ll> numbers;
  ull answer = 0;
  ll max_so_far = -1;
  for (ll i = 0; i < N; i++) {
    ll current; cin >> current;
    max_so_far = max(max_so_far, current * 1LL * current);
    for (ll j = 0; j < 31; j++) {
      ll current_power = binpow(j,K);
      if (current_power > limit || current_power >= max_so_far) break;
      if (current > current_power) continue;
      ll ceiled = ceil(current_power / current);
      ll floored = ceil(current_power / current);
      if (ceiled != floored) continue;

      if (numbers.count(ceiled)) {
        answer++;
      }
    }
    numbers[current] = numbers[current] + 1;
  }
  cout << answer << endl;
  return 0;
}
