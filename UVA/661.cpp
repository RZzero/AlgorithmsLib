// https://onlinejudge.org/external/6/661.pdf
#include <bits/stdc++.h>
using namespace std;

int main () {
  int N, M, C;
  int case_number = 0;

  while (cin >> N >> M >> C) {
    if (case_number) cout << endl;
    case_number++;
    if (N == 0) break;

    vector<int> capacity(N+1);
    vector<bool> state(N+1, false);

    for (int i = 1; i <= N; i++) {
      cin >> capacity[i];
    }

    int current_capacity = 0;
    int max_capacity = 0;
    bool can = true;
    for (int i = 0; i < M; i++) {
      int device_id; cin >> device_id;
      state[device_id] = !state[device_id];

      if (state[device_id]) current_capacity += capacity[device_id];
      else current_capacity -= capacity[device_id];

      max_capacity = max(max_capacity, current_capacity);
      if (current_capacity > C) {
        can = false;
      }
    }

    cout << "Sequence " << case_number << endl;
    if (can) {
      cout << "Fuse was not blown." << endl;
      cout << "Maximal power consumption was " << max_capacity << " amperes." << endl;
    } else {
      cout << "Fuse was blown." << endl;
    }
  }

  return 0;
}
