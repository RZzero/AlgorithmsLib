#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, K;
    cin >> N >> K;

    map<int, int> first_half;
    map<int, int> second_half;
    // Take numbers that repeat and unique numbers
    vector<int> l;
    vector<int> r;
    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      if (first_half.count(n)) {
        l.push_back(n);
        l.push_back(n);
      }
      first_half[n]++;
    }
    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      if (second_half.count(n)) {
        r.push_back(n);
        r.push_back(n);
      }
      second_half[n]++;
    }

    int missing_pairs = (l.size() / 2) - K;
    int cnt = 0;
    for (auto &p : first_half) {
      if (p.second > 1)
        continue;

      l.push_back(p.first);
      r.push_back(p.first);
    }

    for (int i = 0; i < 2 * K; i++) {
      cout << l[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 2 * K; i++) {
      cout << r[i] << " ";
    }
    cout << endl;
  }
  return 0;
}