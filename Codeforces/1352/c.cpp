#include <bits/stdc++.h>

using namespace std;
using Long = unsigned long long;

int main() {
  int T;
  cin >> T;

  while(T--) {
    Long N, K;
    cin >> N >> K;
    
    Long L = 1, R = 1e18;
    Long res = -1;

    auto check = [](Long NN, Long Mid, Long K) -> bool {
      return (NN * Mid) - Mid >= K;
    };

    while (L <= R) {
      Long mid = L + (R-L) / 2;
      if (check(N, mid, K)) {
        res = mid;
        R = mid - 1 ;
      } else {
        L = mid + 1;
      }
    }

    Long answer = N * res - ((N * res - res) - K) - 1;
    cout << answer << endl;
  }
  return 0;
}