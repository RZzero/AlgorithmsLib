#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int T;
  cin >> T;
  while (T--) {
    Long X, Y;
    cin >> X >> Y;
    // bitset<16> bsx = bitset<16>(X);
    // bitset<16> bsy = bitset<16>(Y);
    // cout << bsx << endl;
    // cout << "and " << (bsx & bsy) << endl;
    // cout << "or " << (bsx | bsy) << endl;
    // cout << "xor " << (bsx ^ bsy) << endl;
    // for (int i = 1; i <= 20; i++) {
    //   cout << i << " xor " << X << ": ";
    //   cout << bitset<16>(i ^ X) << endl;
    // }

    Long op = X ^ Y;
    Long cnt = 1;
    for (Long i = 0; i < 64; i++) {
      if (op & (1 << i))
        break;
      cnt *= 2;
    }

    cout << cnt << endl;
  }
  return 0;
}