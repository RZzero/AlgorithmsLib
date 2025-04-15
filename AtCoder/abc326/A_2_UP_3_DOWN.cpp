#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;

  cin >> X >> Y;

  bool can = true;

  if (X > Y)
    can &= X - Y <= 3;
  else
    can &= Y - X <= 2;
  cout << (can ? "Yes" : "No") << endl;
  return 0;
}