#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int x, y;
    cin >> x >> y;

    int maxi = max(x, y);
    int mini = min(x, y);

    while (maxi > 0 && mini > 0) {
      int times = (maxi - mini) / 2;

      maxi = maxi - (2 * times);
      mini -= times;
      if (maxi < mini) {
        swap(maxi, mini);
      }
    }
    cout << (maxi == mini && maxi == 0 ? "YES" : "NO") << endl;
  }
  return 0;
}