#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll LIMIT = 10000000;
int main() {
  ll n,a,b;
  cin >> n >> a >> b;

  for(int i = 0; i <= LIMIT; i++) {
    ll dividend = n - (i * a);
    if (dividend < 0) continue;
    if (dividend % b == 0) {
      ll y = dividend / b;
      if (n == (a * i) + (b * y)) {
        cout << "YES" << endl;
        cout << i << " " << y << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}