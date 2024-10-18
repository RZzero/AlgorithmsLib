#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int Q;
  cin >> Q;

  deque<pair<Long, Long>> pares;
  while (Q--) {
    int t;
    cin >> t;
    Long sum = 0;
    if (t == 1) {
      Long x, c;
      cin >> x >> c;
      pares.push_back({c, x});
    } else {
      Long c;
      cin >> c;

      while (c) {
        auto &front = pares.front();
        Long taken = min(front.first, c);

        sum += taken * 1LL * front.second;

        c -= taken;
        front.first -= taken;

        if (front.first == 0)
          pares.pop_front();
      }
      cout << sum << endl;
    }
  }
  return 0;
}