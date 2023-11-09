#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main () {
  int products, retirement;
  cin >> products >> retirement;

  vector<pair<Long,Long>> investments;

  for (int i = 0; i < products; i++) {
    Long cost, profit;
    cin >> profit >> cost;
    investments.push_back({ cost, profit });
  }


  // binary search for days, take all investments each day?
  auto check = [](Long days, vector<pair<Long,Long>> investments,
    Long retirement) -> bool {

    Long all_after_inv = 0;
    for (auto investment: investments) {
      // could it be possible that taking an investment hurts you?? idk
      Long sum = (investment.second * days * 1LL) - investment.first;
      if (sum > 0) {
        all_after_inv += sum;
      }
      if (all_after_inv >= retirement) break;
    }

    return all_after_inv >= retirement;
  };

  Long L = 0, R = 1e10;
  Long res = -1;
  while (L <= R) {
    Long mid = L + (R - L) / 2;
    if (check(mid, investments, retirement)) {
      R = mid - 1;
      res = mid;
    } else {
      L = mid + 1;
    }
  }

  cout << res << endl;
  return 0;
}
