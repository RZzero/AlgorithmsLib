#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    Long a,b;
    cin >> a >> b;

    Long mini = min(a,b);
    Long maxi = max(a,b);

    if (mini == maxi) {
      cout << 0 << endl;
    } else {
      bool add_one = (maxi-mini) % 10 != 0;
      cout << ((maxi-mini) / 10) + (Long)add_one << endl;
    }
  }
  return 0;
}
