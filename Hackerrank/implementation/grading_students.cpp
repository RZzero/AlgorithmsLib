#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int grade;
    cin >> grade;

    if (grade < 38) cout << grade << endl;
    else {
      int moded = abs((grade%5 - 5));
      int result = moded <= 2 ? grade + moded : grade;
      cout << result << endl;
    }
  }
  return 0;
}
