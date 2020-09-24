// https://onlinejudge.org/external/124/12468.pdf
#include <bits/stdc++.h>
using namespace std;

int main () {
  int x,y;
  while (cin >> x >> y) {
    if (x == -1 && y == -1) break;
    int mini = min(x,y);
    int maxi = max(x,y);

    int a = 100 + mini - maxi;
    int b = maxi-mini;
    cout << min(a,b) << endl;
  }
  return 0;
}
