#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> gives;

void solve() {
  int N, K;
  cin >> N >> K;

  vector<Long> numbers(N);

  // set<int> factors = {1, 7, 17, 119, 289, 2023};
  Long prod = 1;
  for (auto &n : numbers) {
    cin >> n;
    prod *= n;
  }

  bool check1 = prod <= 2023 && 2023 % prod == 0;
  if (check1) {
    cout << "YES" << endl;
    cout << 2023 / prod << " ";
    for (int i = 0; i < K - 1; i++) {
      cout << "1 ";
    }
    cout << endl;
    return;
  }
  cout << "NO" << endl;
}

int main() {
  // 1 7 17 119 289 2023
  //
  // for (int i = 1; i * i <= 2023; i++) {
  //   if (2023 % i == 0) {
  //     gives.push_back(i);
  //   }
  // }
  // for (auto &el : gives) {
  //   cerr << el << " ";
  // }
  // cerr << endl;

  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}