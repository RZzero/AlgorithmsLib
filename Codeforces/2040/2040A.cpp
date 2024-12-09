// https : // codeforces.com/contest/2040/problem/A
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool is_vowel(char &c) {
  return c == 'a' || c == 'e';
}

void solve() {
  int N, K;
  cin >> N >> K;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool can = false;
  int index = -1;
  for (int i = 0; i < N; i++) {
    int cnt = 0;
    for (int j = 0; j < N; j++) {
      if (i == j)
        continue;
      int dif = abs(numbers[i] - numbers[j]);

      if (dif && dif % K != 0) {
        cnt++;
      }
    }
    if (cnt == N - 1) {
      can = true;
      index = i + 1;
      break;
    }
  }
  cout << (can ? "YES" : "NO") << endl;
  if (can)
    cout << index << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}