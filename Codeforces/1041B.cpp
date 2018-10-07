#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main() {
  Long a,b,x,y;
  cin >> a >> b >> x >> y;

  Long asd = __gcd(x,y);
  x = x/asd;
  y = y/asd;

  cout << min(a/x, b/y) << endl;
  return 0;
}