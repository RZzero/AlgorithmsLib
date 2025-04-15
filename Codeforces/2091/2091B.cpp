#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N, X;
  cin >> N >> X;

  vector<Long> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.rbegin(), numbers.rend());
  Long answer = 0;
  int couting_so_far = 1;
  priority_queue<Long, vector<Long>, greater<Long>> mq;
  for (int i = 0; i < N; i++) {
    mq.push(numbers[i]);
    // mq.push(100);
    // cerr << mq.top() << endl;
    if (mq.top() * 1LL * mq.size() >= X) {
      answer++;
      mq = priority_queue<Long, vector<Long>, greater<Long>>();
    }
  }

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