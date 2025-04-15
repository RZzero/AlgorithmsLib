#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  Long N, M;
  cin >> N >> M;

  Long sum = 0;
  bool can = true;
  for (int i = 0; i <= M; i++) {
    Long cur = pow(N, i);
    sum += cur;
    if (sum > (Long)1e9) {
      can = false;
      break;
    }
  }

  if (can)
    cout << sum << endl;
  else
    cout << "inf" << endl;
  return 0;
}