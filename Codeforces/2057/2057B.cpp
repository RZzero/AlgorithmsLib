#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N, K;
  cin >> N >> K;
  vector<int> numbers(N);
  vector<pair<int, int>> pairfreq;
  map<int, int> freq;
  for (auto &n : numbers) {
    cin >> n;
    freq[n]++;
    // pairfreq[]
  }

  if (N == 1) {
    cout << 1 << endl;
    return;
  }
  for (auto [n, frecuencia] : freq) {
    pairfreq.push_back({n, frecuencia});
  }

  sort(pairfreq.begin(), pairfreq.end(), [&](pair<int, int> &a, pair<int, int> &b) -> bool {
    if (a.second > b.second)
      return true;
    return a.first < b.first;
  });

  sort(numbers.begin(), numbers.end());

  // for (auto [n, frecuencia] : pairfreq) {
  //   cerr << n << ": " << frecuencia << endl;
  // }

  Long answer = 0;
  while (K > 0) {
    int sumajestad = pairfreq.back().second;
    pairfreq.back().second = max(pairfreq.back().second - K, 0 * 1LL);
    if (pairfreq.back().second == 0) {
      pairfreq.pop_back();
      K -= sumajestad;
    } else {
      K = 0;
    }
  }
  answer = pairfreq.size();
  cout << max(answer * 1LL, 1LL) << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}