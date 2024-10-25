#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long A, B, C, X;
  cin >> A >> B >> C >> X;
  Long answer = 0;

  for (int i = 0; i <= A; i++) {
    for (int j = 0; j <= B; j++) {
      for (int k = 0; k <= C; k++) {
        if (((500 * i) + (100 * j) + (50 * k)) == X) {
          answer++;
        }
      }
    }
  }

  cout << answer << endl;
  return 0;
}