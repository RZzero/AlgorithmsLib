#include <bits/stdc++.h>

using namespace std;

bool comparator (vector<int> &A, vector<int> &B) {
  return A[0] < B[0];
}

int main () {
  vector<vector<int>> intervals = { { 0, 30 }, { 5, 10 } , { 15, 20 } };

  bool can = true;

  sort(intervals.begin(), intervals.end(), comparator);
  for (int i = 1; i < intervals.size(); i++) {
    if (!(intervals[i-1][0] < intervals[i][0]
      && intervals[i-1][1] <= intervals[i][0])) {
        can = false;
      }
  }
  cout << can << endl;
}
