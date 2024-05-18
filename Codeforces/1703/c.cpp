#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> wheels(N, 0);
    for (int i = 0; i < N; i++) {
      int w;
      cin >> w;
      wheels[i] = w;
    }

    for (int i = 0; i < N; i++) {
      int n_steps;
      string steps;
      cin >> n_steps >> steps;

      int cnt = 0;
      for (auto &ss : steps) {
        if (ss == 'U') {
          wheels[i]--;
          if (wheels[i] < 0) {
            wheels[i] = 9;
          }
        } else {
          wheels[i]++;
          if (wheels[i] > 9) {
            wheels[i] = 0;
          }
        }
      }
    }

    for (auto &w : wheels) {
      cout << w << " ";
    }
    cout << endl;
  }
  return 0;
}