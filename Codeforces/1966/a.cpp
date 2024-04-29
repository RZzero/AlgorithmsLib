#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;
    vector<int> numbers(N);
    map<int, int> mapa;

    bool initiate = false;
    for (auto &n : numbers) {
      cin >> n;
      mapa[n]++;
      if (mapa[n] >= K) {
        initiate = true;
      }
    }
    if (initiate)
      cout << K - 1 << endl;
    else
      cout << N << endl;
  }
  return 0;
}
