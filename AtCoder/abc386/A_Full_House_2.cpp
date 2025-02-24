#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> frq;

  for (int i = 0; i < 4; i++) {
    int n;
    cin >> n;
    frq[n]++;
  }
  bool three = false;
  int twos = 0;

  for (auto &el : frq) {
    if (el.second == 3) {
      three = true;
    } else if (el.second == 2) {
      twos++;
    }
  }

  cout << ((three || twos == 2) ? "Yes" : "No") << endl;
}