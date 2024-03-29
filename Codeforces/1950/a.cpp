#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c) {
      cout << "STAIR" << endl;
    } else if (a < b && b > c) {
      cout << "PEAK" << endl;
    } else {
      cout << "NONE" << endl;
    }
  }
  return 0;
}