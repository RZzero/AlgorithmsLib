#include <bits/stdc++.h>

using namespace std;
using Long = long long;
bool is_good(Long N) {

  if (N > 6 && N > 10 && (N % 10 == 0 || N%6 == 0)) {
    return true;
  }

  // if (N%2 != 0) return false;

  set<Long> divisors;
  Long sum = 0;

  for (Long i = 1; i*i <= N; i++) {
    if (N % i == 0) {
      divisors.insert(i);
      divisors.insert(N/i);
    }
  }

  for (auto &s: divisors) {
    if (s == 1 || s == N) continue;
    sum += s;
  }

  // cout << sum << endl;
  return sum > N;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(0);
  Long L, R;
  cin >> L >> R;

  
  Long left = -1, right = -1;
  Long original_L = L;


  while (L <= R) {
    if (is_good(L)) {
      left = L;
      break;
    }
    L++;
  }
  L = original_L;
  while (R >= L) {
    if (is_good(R)) {
      right = R;
      break;
    }
    R--;
  }

  // for (int i = 1000; i < 2000; i++) {
  //   cout << i << " -> " << (is_good(i) ? "YES" : "NO") << "\n";
  // }
  cout << left << " " << right << '\n';
  return 0;
}