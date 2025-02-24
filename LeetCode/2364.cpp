#include <bits/stdc++.h>
using namespace std;

using Long = long long;

using Long = long long;
long long countBadPairs(vector<int> &nums) {
  Long N = nums.size();
  Long total_pairs = (N * (N - 1)) / 2;
  map<int, Long> mapa;

  for (int i = 0; i < nums.size(); i++) {
    mapa[i - nums[i]]++;
  }

  Long good_pairs = 0;
  for (auto &el : mapa) {
    good_pairs += (el.second * (el.second - 1)) / 2;
  }

  return total_pairs - good_pairs;
}

int main() {
  vector<vector<int>> test_cases = {
      {4, 1, 3, 3},
      {1, 2, 3, 4, 5},
  };

  for (auto &t : test_cases) {
    cout << countBadPairs(t) << endl;
  }
  return 0;
}