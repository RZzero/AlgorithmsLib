#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  vector<Long> numbers(N);

  Long sum = 0;
  for (auto &n : numbers) {
    cin >> n;
    sum += n;
  }

  bool check1 = sum % N == 0;

  if (!check1) {
    cout << "NO" << endl;
    return;
  }

  Long target = sum / N;
  for (int i = 0; i < N - 1; i++) {
    if (numbers[i] > target && i + 2 < N) {
      numbers[i + 2] += numbers[i] - target;
      numbers[i] = target;
    }
  }
  for (int i = N - 1; i > 1; i--) {
    if (numbers[i] > target && i - 2 >= 0) {
      numbers[i - 2] += numbers[i] - target;
      numbers[i] = target;
    }
  }

  bool check2 = true;
  for (int i = 0; i < numbers.size(); i++) {
    check2 &= numbers[i] == target;
  }
  cout << ((check1 && check2) ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}