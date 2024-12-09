#include <bits/stdc++.h>
using namespace std;
using Long = long long;

Long get_current_sum_digits(string S) {
  Long answer = 0;
  for (auto &c : S) {
    answer += (int)c - '0';
  }
  return answer;
}

void solve() {
  string S;
  cin >> S;

  Long count_of_2 = 0;
  Long count_of_3 = 0;
  for (auto &c : S) {
    count_of_2 += (c == '2');
    count_of_3 += (c == '3');
  }

  Long current_sum_digits = get_current_sum_digits(S);
  if (current_sum_digits % 9 == 0) {
    cout << ("YES") << endl;
    return;
  }

  for (Long i = 0; i <= count_of_2; i++) {
    for (Long j = 0; j <= count_of_3; j++) {
      // 2^2 = 4 => aporta 2
      // 3^2 = 9 => aporta 6
      if ((current_sum_digits + (i * 2 * 1LL) + (j * 6 * 1LL)) % 9 == 0) {
        cout << "YES" << endl;
        return;
      }
    }
  }

  cout << "NO" << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}