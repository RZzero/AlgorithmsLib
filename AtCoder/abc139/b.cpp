#include <bits/stdc++.h>

using namespace std;
int main() {
  int A, B;
  cin >> A >> B;

  if (B == 1) {
    cout << 0 << endl;
  } else if (A >= B) {
    cout << 1 << endl;
  } else {
    int answer = 0;
    int covered = 1;
    while (covered < B) {
      covered += A;
      covered -= 1;
      answer++;
    }
    cout << answer << endl;
  }
  return 0;
}