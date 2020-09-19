// https://onlinejudge.org/external/114/11498.pdf
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  while (cin >> N) {
    if (!N) break;
    double line_x,line_y;
    cin >> line_x >> line_y;

    for(int cur = 0; cur < N; cur++) {
      double cur_x, cur_y;
      cin >> cur_x >> cur_y;

      if (cur_x == line_x || cur_y == line_y) {
        cout << "divisa" << endl;
      } else if (cur_x < line_x) {
        if (cur_y > line_y) {
          cout << "NO" << endl;
        } else {
          cout << "SO" << endl;
        }
      } else {
        if (cur_y > line_y) {
          cout << "NE" << endl;
        } else {
          cout << "SE" << endl;
        }
      }
    }
  }
  return 0;
}
