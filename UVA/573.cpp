// https://onlinejudge.org/external/5/573.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  double H, U, D, F;
  while (cin >> H >> U >> D >> F) {
    if (H <= 0) break;

    double climbed_distance = 0;
    double lost_first_day = U * (F/100.0);
    int days = 0;
    bool can = false;

    while (true) {
      days++;
      climbed_distance += U;

      U = (U - lost_first_day) < 0 ? 0 :  U - lost_first_day;

      if (climbed_distance > H) {
        can = true;
        break;
      }

      climbed_distance -= D;
      if (climbed_distance < 0) break;
    }
    
    string answer = can
      ? "success on day " : "failure on day ";
    cout << answer << days << endl;
  }

  return 0;
}
