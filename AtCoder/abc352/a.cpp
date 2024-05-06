#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, Y, Z;

  cin >> N >> X >> Y >> Z;

  int mini = min(X, Y);
  int maxi = max(X, Y);

  if (Z >= mini && Z <= maxi) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}