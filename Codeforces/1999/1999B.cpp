#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int answer = 0;
    if ((a > c && b >= d) || (b > d && a >= c))
      answer++;

    if ((a > d && b >= c) || (b > c && a >= d))
      answer++;

    if ((b > c && a >= d) || (a > d && b >= c))
      answer++;

    if ((b > d && a >= c) || (a > c && b >= d))
      answer++;
    cout << answer << endl;
  }
  return 0;
}