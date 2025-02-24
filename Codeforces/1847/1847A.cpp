#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> gives;

Long get_diff(vector<int> &A, int &l, int &r) {
  Long diff = 0;
  if (l != r && r == A.size())
    r--;
  for (int i = l + 1; i < A.size() && i < r; i++)
    diff += abs(A[i - 1] - A[i]);
  return diff;
}

void solve() {
  int N, K;
  cin >> N >> K;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  vector<int> diffs;
  for (int i = 1; i < numbers.size(); i++) {
    diffs.push_back(abs(numbers[i - 1] - numbers[i]));
  }
  sort(diffs.begin(), diffs.end());
  reverse(diffs.begin(), diffs.end());
  // sort(diffs.begin(), diffs.end(), std::greater());
  // cerr << "THE DIFF" << endl;
  // for (auto &el : diffs) {
  //   cerr << el << " ";
  // }
  // cerr << endl;

  int answer = 0;
  for (int i = K - 1; i < N - 1; i++) {
    answer += diffs[i];
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