#include <bits/stdc++.h>
using namespace std;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int N; cin >> N;
    long long sum = 0;
    int mini = 1e9;
    vector<int> numbers(N);
    for (int &n: numbers) {
      cin >> n;
      mini = min(mini, n);
    }

    for (auto &n: numbers) {
      sum += n-mini;
    }

    cout << sum << endl;
  }
  return 0;
}