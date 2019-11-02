#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
set<ull> PrimeFactors;
int MOD = 1e9 + 7;

ull binpow(ull a, ull b) {
  ull res = 1;
  while (b > 0) {
    if (b & 1)
      res = (res * a) % MOD;
    a = (a * a) % MOD;
    b >>= 1;
  }
  return res;
}

void getPrimeFactors(int X){
  while(X%2 == 0) {
    PrimeFactors.insert(2);
    X/=2;
  }
  for (int i = 3; i <= sqrt(X); i = i + 2){  
    while (X % i == 0){  
      PrimeFactors.insert(i); 
      X = X/i;  
    }
  }
  if (X > 2) PrimeFactors.insert(X);
}

ull getMaxValue(int p, int max_value, int N) {
  ull answer = -1;
  for (ull i = max_value; i >= 1; i--) {
    ull el_value = binpow(p, i);
    if (N % el_value == 0) {
      answer = el_value;
      break;
    }
  }
  return answer;
}
int main(){
  // cout << getMaxValue(3, 5, 63) << endl;
  int X; ull N;
  cin >> X >> N;
  getPrimeFactors(X);
  ull answer = 1;
  N = N % MOD;
  for (auto &p: PrimeFactors) {
    int max_power = floor(log(N)*1.0/log(p)) + 1;
    for (ull i = max_power; i >= 0; i--) {
      ull el_value = binpow(p, i) % MOD;
      if (N % el_value == 0) {
        cout << "HAHAHA " << el_value << endl; 
        answer = (answer * el_value) % MOD;
        break;
      }
    }
  }
  cout << answer << endl;
  return 0;
}
