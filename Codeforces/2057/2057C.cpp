#include <bits/stdc++.h>
using namespace std;
using Long = long long;

string to_bin(int N) {
  string answer = "";
  while (N) {
    if (N & 1) {
      answer += '1';
    } else {
      answer += '0';
    }
    N >>= 1;
  }

  reverse(answer.begin(), answer.end());
  return answer;
}

int get_sum(int a, int b, int c) {
  return (int)((a ^ b) + (b ^ c) + (a ^ c));
}
void solve() {
  int L, R;
  cin >> L >> R;
  // cerr << to_bin(137) << endl;
  // cerr << to_bin(128) << endl;
  // find msb that is different between left and right
  int msb;
  bool has_happened = false;
  int right_bound = -1;

  for (int i = 30; i >= 0; i--) {
    bool r_has_it = (R & (1 << i));
    bool l_has_it = (L & (1 << i));
    if (l_has_it != r_has_it) {
      // found.
      msb = i;
      int powered = pow(2, msb);
      right_bound = R & ~(powered - 1);
      // cerr << "righty " << right_bound << endl;
      break;
    }
  }

  int left_bound = right_bound - 1;

  int sobra = -1;
  for (int i = L; i <= R; i++) {
    if (i != right_bound && i != left_bound) {
      sobra = i;
      break;
    }
  }
  // cerr << get_sum(left_bound, sobra, right_bound) << endl;
  cout << left_bound << " " << sobra << " " << right_bound << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    // if (T == 3)
    //   break;
    solve();
  }
  return 0;
}