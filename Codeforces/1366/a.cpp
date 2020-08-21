// https://codeforces.com/problemset/problem/1366/A
#include <iostream>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int A, B;
    cin >> A >> B;
    cout << min(min(A,B), (A+B)/3) << endl;
  }
  return 0;
}