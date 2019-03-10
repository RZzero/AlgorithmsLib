#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

unsigned int ipowmod(unsigned long long x, unsigned long long n, unsigned int m) {
   unsigned long long res = 1 % m;
   x %= m;
   for (; n > 0; n >>= 1) {
      if (n & 1) {
         res = (res * x) % m;
      }
      x = (x * x) % m;
   }
   return (unsigned int) res;
}



long long calc(long long b, long long t) {
  if (t  == 1) return 1;
  if (t % 2 != 0){
    return ((ipowmod(b,t-1,MOD) % MOD) + ((calc(b, t-1) % MOD) % MOD)) % MOD;
  } else {
    return ((1 + ipowmod(b, t/2, MOD) % MOD) * (calc(b, t/2) % MOD )) % MOD;
  }
}

int main (){
  long long T, x,n;
  scanf("%lld", &T);
  while(T--) {
    scanf("%lld%lld", &x, &n);
    cout << (calc(x, n + 1) % MOD)<< endl;
  }
  return 0;
}