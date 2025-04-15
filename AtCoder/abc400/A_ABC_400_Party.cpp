#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  cout << (400 % A == 0 ? 400 / A : -1) << endl;

  return 0;
}