#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  A = B = 0;

  for (int i = 0; i < 9; i++) {
    int n;
    cin >> n;
    A += n;
  }

  for (int i = 0; i < 8; i++) {
    int n;
    cin >> n;
    B += n;
  }
  if (B > A)
    cout << 0 << endl;
  else if (A == B) {
    cout << 1 << endl;
  } else {
    cout << (A - B) + 1 << endl;
  }
  return 0;
}