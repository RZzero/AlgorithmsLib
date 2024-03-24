#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  Long N, K;
  cin >> N >> K;

  auto gauss_sum = [&](Long K) -> Long {
    return (K * (K + 1)) / 2;
  };
  Long answer = gauss_sum(K);
  set<Long> seto;
  for (int i = 0; i < N; i++) {
    Long n;
    cin >> n;

    if (n <= K && !seto.count(n)) {
      answer -= n;
      seto.insert(n);
    }
  }
  cout << answer << endl;
  return 0;
}