#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (auto &n: numbers) cin >> n;

    if (N == 2) {
      cout << "YES" << endl;
      continue;
    }

    bool odd_pos = true;
    bool even_pos = true;

    for (int i = 1; i+2 < N; i += 2) {
      even_pos &= (numbers[i+2]&1) == (numbers[i]&1);
      if (!even_pos) break;
    }

    for (int i = 0; i+2 < N; i += 2) {
      odd_pos &= (numbers[i+2]&1) == (numbers[i]&1);
      if (!odd_pos) break;
    }

    if (even_pos && odd_pos) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}