#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int MOD = 1e9 + 7;
ull binpow(ull a, ull b) {
  ull res = 1 % MOD;
  while (b > 0) {
    if (b & 1)
      res = (res * a) % MOD;
    a = (a * a) % MOD;
    b >>= 1;
  }
  return res;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int x, y;
    cin >> x >> y;

    int xy = binpow(y,x);
    int yx = binpow(x,y);

    if(xy == yx) cout << "=" << endl;
    else if (xy < yx) cout << ">" << endl;
    else cout << "<" << endl;

    return 0;
}
