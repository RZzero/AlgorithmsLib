// https://codeforces.com/problemset/problem/1365/B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int N; cin >> N;
    vector<int> numbers(N);
    vector<int> types(N);
    bool has_0, has_1;
    has_1 = has_0 = false;

    for (auto &n: numbers) cin >> n;
    for (int i = 0; i < types.size(); i++) {
      int type;
      cin >> type;
      if (type) has_1 = true;
      else if (!type) has_0 = true;
    }

    if (is_sorted(numbers.begin(), numbers.end()) || (has_1 && has_0)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}