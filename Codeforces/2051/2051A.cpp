#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  vector<int> monocarp(N);
  vector<int> stereocarp(N);

  for (auto &n : monocarp)
    cin >> n;
  for (auto &n : stereocarp)
    cin >> n;

  stereocarp.push_back(0);

  Long for_mono = 0;
  Long for_stereo = 0;

  for (int i = 0; i < N; i++) {
    if (monocarp[i] > stereocarp[i + 1]) {
      for_mono += monocarp[i];
      for_stereo += stereocarp[i + 1];
    }
  }

  cout << for_mono - for_stereo << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}