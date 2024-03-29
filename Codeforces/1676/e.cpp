#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, Q;
    cin >> N >> Q;

    vector<int> numbers(N);
    for (auto &n : numbers)
      cin >> n;

    // Suffix Sum of sorted array (Just sort and reverse)
    // Binary search from R to L searching for first YES
    // Return N - mid + 1?
    sort(numbers.rbegin(), numbers.rend());
    vector<int> prefix_sum(N + 1, 0);
    for (int i = 1; i <= N; i++) {
      prefix_sum[i] = prefix_sum[i - 1] + numbers[i - 1];
    }

    for (int i = 0; i < Q; i++) {
      int q;
      cin >> q;
      auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), q);
      if (it == prefix_sum.end()) {
        cout << -1 << endl;
      } else {
        cout << it - prefix_sum.begin() << endl;
      }
    }
  }
  return 0;
}

/*
1
8 7
4 3 3 1 1 4 5 9
*/