#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long MOD = 1e9 + 7;

int main() {
  Long answer = 1;
  Long N;
  cin >> N;

  for (Long i = 1; i <= N; i++) {
    answer = (answer * i) % MOD;
  }
  cout << answer << endl;
  return 0;
}