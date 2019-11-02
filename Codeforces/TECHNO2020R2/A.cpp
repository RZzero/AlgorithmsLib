#include <bits/stdc++.h>
  
using namespace std;
using ll = long long;

vector<ll> powers;
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

int main() {
  int N, K;
  cin >> N >> K;
  vector<ll> numbers;
  map<ll,ll> mapa;
  ll maxi = -1;
  for(int i = 0; i < N; i++){
    ll dum; cin>> dum;
    maxi = max(maxi, dum);
    numbers.push_back(dum);
  }
  int cnt = 0;
  for(int i = 0; i < N; i++){
    bool can = false;
    for(int j = 0; j < powers.size(); j++){
      ll current_power = powers[j];
      if (numbers[i] > current_power) continue;
      ll ceiled = ceil(current_power / numbers[i]);
      ll floored = ceil(current_power / numbers[i]);
      if (ceiled != floored) continue;

      if (mapa.count(ceiled)) {
        can = true;
      }
    }
    if (can) cnt++;
  }
  cout << cnt << endl;
  return 0;
}