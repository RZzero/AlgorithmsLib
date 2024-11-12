#include <bits/stdc++.h>
using namespace std;

void move_alice(int &x, int &y, char &next_move) {
  if (next_move == 'N')
    y++;
  else if (next_move == 'S')
    y--;
  else if (next_move == 'E')
    x++;
  else if (next_move == 'W')
    x--;
}

void solve() {
  int N, A, B;
  cin >> N >> A >> B;

  string S;
  cin >> S;

  int cur_x = 0, cur_y = 0;

  bool can = false;
  for (int i = 0; i < 100 && !can; i++) {
    for (auto &next_move : S) {
      move_alice(cur_x, cur_y, next_move);
      can = cur_x == A && cur_y == B;
      if (can)
        break;
    }
  }

  cout << (can ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}