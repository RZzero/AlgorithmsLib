#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  vector<int> mod(N, 0);
  for (int i = 0; i < numbers.size(); i++) {
    cin >> numbers[i];
    mod[i] = numbers[i] % 2;
  }

  sort(numbers.begin(), numbers.end());

  bool can = true;
  for (int i = 0; i < numbers.size() && can; i++) {
    if (numbers[i] % 2 != mod[i] % 2)
      can = false;
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