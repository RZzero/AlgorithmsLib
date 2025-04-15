#include <bits/stdc++.h>
using namespace std;

using Long = long long;
int maximumCandies(vector<int> &candies, long long k) {
  Long sum = 0;
  Long highest = candies[0];
  for (int i = 0; i < candies.size(); i++) {
    sum += candies[i];
    highest = max(highest, candies[i] * 1LL);
  }

  if (sum < k)
    return 0;

  Long L = 0, R = highest;
  Long res = -1;

  while (L < R) {
    Long mid = (L + R + 1) / 2;

    Long distributed = 0;
    for (int i = 0; i < candies.size() && distributed < k; i++) {
      distributed += candies[i] / mid;
    }

    if (distributed >= k) {
      res = max(res, mid);
      L = mid;
    } else {
      R = mid - 1;
    }
  }

  return res == -1 ? 0 : res;
}

int main() {
  vector<pair<vector<int>, int>> test_cases = {
      {{5, 8, 6}, 3},
      {{2, 5}, 11},
      {{1, 2, 3, 4, 10}, 5},
  };

  for (auto &t : test_cases) {
    cout << maximumCandies(t.first, t.second) << endl;
  }
  return 0;
}