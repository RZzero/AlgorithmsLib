#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());
  bool can = false;
  int ways = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        // 𝑥+𝑦>𝑧
        // 𝑦+𝑧>𝑥
        // 𝑧+𝑥>𝑦
        int x = numbers[i];
        int y = numbers[j];
        int z = numbers[k];
        if (x + y > z && y + z > x && z + x > y) {
          ways++;
          // return;
        }
      }
    }
  }
  cout << (ways ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}