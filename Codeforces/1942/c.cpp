#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<int> answer(N);
    for (auto &n : answer) {
      cin >> n;
    }
    int ans = N - 2;
    sort(answer.begin(), answer.end());
    cout << ans << endl;
  }
  return 0;
}