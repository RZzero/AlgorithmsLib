#include <bits/stdc++.h>

using namespace std;

int main() {
  int T; cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> permutation;

    if (N < 4) permutation.push_back(-1);
    else if (N == 4) permutation = {3, 1, 4, 2};
    else {
      for (int i = 2; i <= (N%2 == 0 ? N : N-1); i += 2) {
        permutation.push_back(i);
      }

      int last_odd_insert = permutation.size();
      for (int i = (N%2 == 0 ? N-1 : N); i >= 1; i -= 2) {
        permutation.push_back(i);
      }

      if (N%2 == 1) {
        swap(permutation[last_odd_insert], permutation[last_odd_insert+2]);
        swap(permutation[last_odd_insert+1], permutation[last_odd_insert+2]);
      } else {
        swap(permutation[last_odd_insert], permutation[last_odd_insert+1]);
      }
    }
    for (auto &p : permutation) {
      cout << p << " ";
    }
    // cout << endl;
    // for (int i = 0; i < permutation.size()-1; i++) {
    //   cout << abs(permutation[i+1]-permutation[i]) << " ";
    // }
    // cout << "\n";
    cout << "\n";
  }
  return 0;
}