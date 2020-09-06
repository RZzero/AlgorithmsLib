// https://codeforces.com/problemset/problem/1102/A

#include <iostream>

using namespace std;
typedef long long Long;

int main () {
  Long N;
  cin >> N;

  Long gaussSum = (N * (N + 1)) / 2;

  if (gaussSum % 2) cout << 1 << endl;
  else cout << 0 << endl;
  return 0;
}
