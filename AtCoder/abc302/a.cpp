#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long A, B;
  cin >> A >> B;

  if (B >= A) {
    cout << 1 << endl;
  } else {
    cout << (A % B == 0 ? A / B : A / B + 1) << endl;
  }
  return 0;
}