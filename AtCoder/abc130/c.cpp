#include<bits/stdc++.h>
using namespace std;

int main () {
  double W, H, x, y;
  cin >> W >> H >> x >> y;

  if ((2*x) == W && (2*y) == H) {
    cout << fixed << setprecision(9) << W * H / 2.0  << " " << 1 << endl;
  } else {
    cout << fixed << setprecision(9) << W * H / 2.0 << " " << 0 << endl;
  }
  return 0;
}
