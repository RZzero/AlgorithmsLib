#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main() {
  int T;
  cin >> T;

  while(T--) {
    Long a,b,n, S;
    cin >> a >> b >> n >> S;

    Long intoS = S/n;
    Long take = a >= intoS ? intoS : a;
    Long approaching = take*1LL*n;
    bool can = ((b + approaching*1LL >= S) && n <= S) ? true : false;
    if ((b >= S) || (can)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
