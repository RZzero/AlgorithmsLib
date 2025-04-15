#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  stack<int> mst;
  for (int i = 0; i < 100; i++)
    mst.push(0);

  for (int i = 0; i < Q; i++) {
    int q;
    cin >> q;
    if (q == 1) {
      int x;
      cin >> x;
      mst.push(x);
    } else {
      cout << mst.top() << endl;
      mst.pop();
    }
  }
  return 0;
}