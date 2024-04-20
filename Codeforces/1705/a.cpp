#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int min_difference, N;
    cin >> N >> min_difference;
    vector<int> heights(2 * N);
    for (auto &h : heights) {
      cin >> h;
    }

    sort(heights.begin(), heights.end());

    bool can = true;
    for (int i = 0; i < N; i++) {
      int ltr = heights[i];
      int rtr = heights[N + i];
      can &= ((rtr - ltr) >= min_difference);
    }

    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}