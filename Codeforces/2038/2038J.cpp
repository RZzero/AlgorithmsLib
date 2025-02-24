// https : // codeforces.com/problemset/problem/2038/J
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long people_in_line = 0;
  int n;
  char x;
  int y;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    cin >> y;
    if (x == 'P') {
      people_in_line += y;
    } else {
      cout << (people_in_line + 1 <= y ? "YES" : "NO") << endl;
      people_in_line = people_in_line > y ? people_in_line - y : 0;
    }
  }
  return 0;
}