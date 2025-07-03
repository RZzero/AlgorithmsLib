#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;

  while (T--) {
    Long x, y;
    cin >> x >> y;

    Long maxi = max(x, y);
    Long mini = min(x, y);
    if ((maxi + mini %3 == 0) && maxi <= 2*mini) {
        cout << "YES" << endl;
    }
    cout << "NO" << endl;
  }
  return 0;
}
