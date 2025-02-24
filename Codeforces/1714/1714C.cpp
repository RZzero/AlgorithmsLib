#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void solve() {
  Long N;
  cin >> N;

  if (N <= 9) {
    cout << N << endl;
  } else if (N == 45) {
    cout << "123456789" << endl;
  } else {
    vector<Long> answer;
    int sum = 9;
    for (Long i = 8; i >= 0; i--) {
      // cerr << N << endl;
      if (N >= digits[i]) {
        answer.push_back(digits[i]);
        N -= digits[i];
      }
    }
    // cerr << endl;
    sort(answer.begin(), answer.end());

    for (auto &a : answer)
      cout << a;
    cout << endl;
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}