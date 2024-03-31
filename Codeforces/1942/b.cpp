#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> MEX(N + 1, 0);
    for (auto &n : A)
      cin >> n;

    set<int> taken;
    vector<int> print_order;

    // current_mex - x = A[i]
    // x = current_mex -
    int current_mex = N;
    for (int i = N - 1; i >= 0; i--) {
      if (A[i] <= 0) {
        print_order.push_back(current_mex + -1 * A[i]);
      } else {
        current_mex = current_mex - A[i];
        print_order.push_back(current_mex);
      }
    }
    reverse(print_order.begin(), print_order.end());
    for (int i = 0; i < print_order.size(); i++) {
      cout << print_order[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
/*
1
3
-2 1 2

1
5
1 1 -2 1 2
*/