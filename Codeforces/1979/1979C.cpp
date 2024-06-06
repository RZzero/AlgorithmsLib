#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> coins;
int L, R;

Long binary_search_simple(Long lo, Long hi, Long coin, Long target) {
  Long res = -1; // remains -1 if no argument is good
  while (lo <= hi) {
    Long mid = lo + (hi - lo) / 2;
    if (coin * mid > target) {
      hi = mid - 1;
      res = mid; // if searching for last NO, move this line to else case
    } else {
      lo = mid + 1;
    }
  }
  return res;
}

vector<int> solve(Long amount) {
  bool can = true;
  Long sum_of_outcomes = 0;
  vector<int> answers;
  for (auto &coin : coins) {
    Long current = binary_search_simple(1, 400, coin, amount);
    answers.push_back(current);
    sum_of_outcomes += current;
  }

  if (sum_of_outcomes == amount) {
    return answers;
  }

  return vector<int>{-1};
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int C;
    cin >> C;
    L = 1, R = 20 * 20;
    coins = vector<Long>(C);
    for (auto &c : coins)
      cin >> c;

    vector<int> answer;
    for (int i = 1; i <= R; i++) {
      answer = solve(i);
      if (answer[0] != -1) {
        break;
      }
    }

    if (answer.size() == 1 && answer[0] == -1) {
      cout << -1 << endl;
      continue;
    }

    for (auto &a : answer) {
      cout << a << " ";
    }
    cout << endl;
  }
  return 0;
}

// 16
// 3*7=21 2*9=18 6*3=18 17*1=17 2*9=18 2*13=26