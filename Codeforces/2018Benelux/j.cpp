#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main () {

  double answer = 0;
  vector<double> sides;
  double sum = 0;
  for (int i = 0; i < 4; i++) {
    double cur; cin >> cur;
    sides.push_back(cur);
    sum += cur;
  }

  double semiperimeter = sum / 2;
  answer = max(answer, sqrt((semiperimeter-sides[0])*1.0*(semiperimeter-sides[1])*(semiperimeter-sides[2])*(semiperimeter-sides[3])));
  cout << fixed << setprecision(12) << answer << endl;
  return 0;
}
