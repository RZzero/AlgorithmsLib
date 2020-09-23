#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

Long get_multiplication(Long a, Long b, Long x, Long y, Long n) {
  Long sobra = 0;
  if (a-n >= x) {
    a -= n;
  } else {
    sobra = n-(a-x);
    a -= (a-x);
    b = b-sobra < y ? b-(b-y) : b-sobra;
  }
  
  return a*b;
}

void solve() {
  Long a,b,x,y,n;
  cin >> a >> b >> x >> y >> n;
  // cout << get_multiplication(a,b,x,y,n) << endl;
  // cout << get_multiplication(b,a,y,x,n) << endl;
  cout << min(get_multiplication(a,b,x,y,n),get_multiplication(b,a,y,x,n)) << endl; 
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    solve();
  }
  return 0;
}
