// https://onlinejudge.org/external/115/11547.pdf

#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int cur;
    cin >> cur;
    cout << abs((((((((cur*567)/9)+7492)*235)/47)-498)/10)%10) << endl;
  }
  return 0;
}
