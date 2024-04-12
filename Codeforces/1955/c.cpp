#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    Long N, K;
    cin >> N >> K;
    vector<Long> ships(N);
    Long all_sum = 0;
    for (auto &n : ships) {
      cin >> n;
      all_sum += n;
    }

    Long from_left = K / 2 + K % 2;
    Long from_right = K / 2;

    for (int i = 0; i < ships.size() && from_left > 0; i++) {
      if (from_left == 0)
        break;

      if (from_left >= ships[i]) {
        from_left -= ships[i];
        ships[i] = 0;
      } else if (ships[i] > from_left) {
        ships[i] -= from_left;
        from_left = 0;
      }
    }

    for (int j = N - 1; j >= 0 && from_right > 0; j--) {
      if (from_right >= ships[j]) {
        from_right -= ships[j];
        ships[j] = 0;
      } else if (ships[j] > from_right) {
        ships[j] -= from_right;
        from_right = 0;
      }
    }

    Long sunk = 0;
    for (auto &s : ships) {
      if (s == 0)
        sunk++;
    }
    cout << sunk << endl;
  }
  return 0;
}

/*
1
4 5
1 2 4 3

1
2 7
5 2
*/