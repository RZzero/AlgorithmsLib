#include <bits/stdc++.h>

using namespace std;

int main () {
  int m,p,d,s;
  cin >> p >> d >> m >> s;
  int answer = 0;
  bool first = true;
  while (s > 0) {
    if (first || p > m) {
      if (s - p < 0) break;
      s -= p;
      p -= d;
      first = false;
    } else {
      if (s - m < 0) break;
      s -= m;
    }
    answer++;
  }
  cout << answer << endl;
  return 0;
}