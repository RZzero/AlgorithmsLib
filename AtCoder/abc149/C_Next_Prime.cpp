#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N;
  cin >> N;

  vector<bool> is_prime(1e5 + 7, 1);
  Long answer = 2;

  for (Long i = 2; i <= 1e5 + 7; i++) {
    if (is_prime[i]) {
      if (i >= N) {
        answer = i;
        break;
      }
      for (Long j = i + i; j <= 1e5 + 7; j += i) {
        is_prime[j] = false;
      }
    }
  }
  cout << answer << endl;
  return 0;
}