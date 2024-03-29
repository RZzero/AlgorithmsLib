#include <bits/stdc++.h>

using namespace std;
using Long = unsigned long long;
int main() {
  Long L, R;
  cin >> L >> R;
  Long limit = R - L + 1;
  cout << "YES" << endl;
  for (Long i = 0; i < limit / 2; i++) {
    L += 2;
    cout << L - 2 << " " << L - 1 << endl;
  }
  return 0;
}