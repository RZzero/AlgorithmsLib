#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long X;
  cin >> X;

  // Force to be 6 and 5.

  if (X <= 6) {
    cout << 1 << endl;
  } else {
    Long sobra = X % 11;
    Long to_add = sobra > 0 ? (sobra > 6 ? 2 : 1) : 0;
    cout << ((X / 11 * 1LL) * 2 * 1LL + to_add) << endl;
  }
}