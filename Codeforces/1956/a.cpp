#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int K, Q;
    cin >> K >> Q;

    vector<int> palomos(K);
    for (auto &p : palomos)
      cin >> p;

    for (int i = 0; i < Q; i++) {
      int q;
      cin >> q;
      if (palomos[0] > q) {
        cout << q << " ";
      } else {
        cout << q - (q - palomos[0]) - 1 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
/*
1
2 3
2 3
1 2 3
*/