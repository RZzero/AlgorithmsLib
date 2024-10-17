#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  string S;
  cin >> N >> S;
  Long sum = 0;

  for (int i = 0; i < N; i++) {
    // cout << (S[i] == 'L' ? i : N - i - 1) << " ";
    sum += S[i] == 'L' ? i : N - i - 1;
  }

  int l_count = 0, r_count = 0;
  Long answer = 0;
  Long optimal_answer = 0;
  // RRLL
  // RRLLL
  Long current = sum;
  Long half = N%2 ? (N+1) / 2 : N / 2;
  for (int i = 0; i < N; i++) {
    if ((i+1) <= half && S[i] == 'L') {
      current -= i;
      current += N - i - 1;
      // S[i] = 'R';
    } else if ((i+1) > half && S[i] == 'R') {
      // S[i] = 'L';
      current += i;
      current -= N - i - 1;
    }
    cout << current << " ";
    // bool is_optimal = (i+1)(N / 2)
    // if (S[i] == 'L') l_count++;
    // else r_count++;
  }
  cout << endl;
}

// LRRLL

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}