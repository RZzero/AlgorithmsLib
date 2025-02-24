#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N;
  cin >> N;
  vector<Long> numbers;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    numbers.push_back(n);
  }
  sort(numbers.begin(), numbers.end());

  Long answer = numbers[0];
  for (int i = 1; i < numbers.size(); i++) {
    answer = max(answer, numbers[i] - numbers[i - 1]);
  }
  // auto real = numbers.begin();
  // numbers.erase(real);
  // Long restando = *real;

  // for (auto n = numbers.begin(); n != numbers.end();) {
  //   Long k =

  // }

  cout << answer << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}