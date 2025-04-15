#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int bit_set_count(int n) {
  int bit_count = 0;
  while (n) {
    if (n & 1)
      bit_count++;
    n = n >> 1;
  }
  return bit_count;
}

bool share_bits(int &x_cp, int &cur_cp) {
  bool can = true;
  int cur = cur_cp;
  int x = x_cp;

  for (int i = 31; i >= 0 && can; i--) {
    if ((cur & (1 << i))) {
      if (!(x & (1 << i))) {
        can = false;
      }
    }
  }
  return can;
}

void solve() {
  int n, x;
  cin >> n >> x;

  if (!x || n == 1) {
    for (int i = 0; i < n; i++)
      cout << x << " ";
    cout << endl;
    return;
  }
  vector<int> answer;
  int accumulated = 0;
  for (int i = 0; i < n; i++) {
    if ((i | x) == x) {
      accumulated |= i;
      answer.push_back(i);
    }
  }

  while (answer.size() < n)
    answer.push_back(x);

  if (accumulated != x) {
    answer.pop_back();
    answer.push_back(x);
  }
  for (auto &an : answer) {
    cout << an << " ";
  }
  cout << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}