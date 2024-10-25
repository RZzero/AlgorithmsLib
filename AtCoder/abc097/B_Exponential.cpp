#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long X;
  cin >> X;

  Long answer = 0;
  for (Long b = 1; b <= 1000; b++) {
    for (Long p = 2; p <= 1000; p++) {
      Long elevated = pow(b, p);
      if (elevated <= X)
        answer = max(elevated, answer);
    }
  }
  cout << answer << endl;
  return 0;
}