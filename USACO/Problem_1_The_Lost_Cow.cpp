#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  int X, Y;
  cin >> X >> Y;
  int answer = 0;

  auto hasReachedBessie = [&](int currentPos) -> bool {
    if (Y > X && currentPos >= Y)
      return true;
    if (Y < X && currentPos <= Y)
      return true;
    return false;
  };

  int currentPos = X;
  int mult = 1;
  int step = 0;

  while (!hasReachedBessie(currentPos)) {
    if (step > 0) {
      mult = abs(mult) * 2;
      if (step % 2 == 1)
        mult *= -1;
    }

    currentPos = X + mult;
    if (Y > X) {
      answer += (currentPos >= Y ? Y - X : 2 * abs(mult));
    } else {
      answer += (currentPos <= Y ? X - Y : 2 * abs(mult));
    }

    step++;
  }
  cout << answer << endl;
  return 0;
}