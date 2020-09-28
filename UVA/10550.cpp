//https://uhunt.onlinejudge.org/id/867554
#include <bits/stdc++.h>

using namespace std;

int main () {
  int initial, a, b, c;

  while (cin >> initial >> a >> b >> c) {
    if (!initial && !a && !b && !c) break;
    long constant = 360 * 3;
    long answer = 0;
    int cnt = 0;

    if (initial < a) cnt++;
    if (b < a) cnt++;
    if (b < c) cnt++;

    answer += initial - a;
    answer += b - a;
    answer += b - c;
    answer *= 9;

    cout << constant + answer + (40 * cnt * 9) << endl;
  }
  return 0;
}
