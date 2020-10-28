#include <bits/stdc++.h>

using namespace std;
const int LIMIT = 5 * 1e6 + 200;
vector<bool> is_prime(LIMIT, true);
vector<int> primes;

int main () {
  int N = 7;
  int answer = 0;
  string lala = string(1e6, '1');
  bitset<(int)1e6> is_prime(lala);

  is_prime.set(0, false);
  is_prime.set(1, false);
  for (int i = 2; i <= N; i++) {
    if (is_prime.test(i)) {
      if (i < N) answer++;
      for (int j = i + i; j <= N; j += i) {
        is_prime.set(j, false);
      }
    }
  }
  cout << answer << endl;
  return 0;
}
