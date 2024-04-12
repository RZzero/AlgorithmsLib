#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() { 
  int N = 3, A = 1, C = 2, D = 3;


  for (int i = 1; i <= 3; i++) {
    int current = A;
    cout << current << " ";
    for (int j = 2; j <=3; j++) {
      if (i == 1 && j == 1) continue;
      current += D;
      cout << current << " ";
    }
    cout << endl;
    A += C;
  }
  // int T;
  // cin >> T;
  // while (T--) {
  //   int N, A, B;
  //   cin >> N >> A >> B;

  //   if (N == 1) {
  //     cout << A << endl;
  //   } else if (2 * A <= B) {
  //     cout << N*A << endl;
  //   } else {
  //     bool extra = N%2 == 1;
  //     cout << ((N/2) * B) + (extra*A) << endl;
  //   }
  // }
  return 0;
}