// https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {

  Long T;
  cin >> T;

  while (T--) {
    Long x, y;
    cin >> y >> x;

    Long maxi = max(x, y);
    Long mini = min(x, y);
    bool maxi_x_does_not_match = maxi == x && x % 2 == 0;
    bool maxi_y_does_not_match = maxi == y && y % 2 == 1;

    if (maxi_x_does_not_match) {
      cout << ((x * x) - x - (x - y)) + 1 << endl;
    } else if (maxi_y_does_not_match) {
      cout << ((y * y) - y - (y - x)) + 1 << endl;
    } else {
      cout << (maxi * maxi) - (mini - 1) << endl;
    }
  }

  return 0;
}