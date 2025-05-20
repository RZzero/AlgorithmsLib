#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries) {
  bool can = true;
  vector<Long> equalizer(nums.size() + 1, 0);

  for (auto q : queries) {
    int L = q.front();
    int R = q.back();

    equalizer[L]++;
    equalizer[R + 1]--;
  }

  vector<Long> PS(nums.size() + 1, 0);

  for (int i = 0; i < PS.size(); i++) {
    PS[i] = i == 0 ? equalizer[i] : PS[i - 1] + equalizer[i];
  }

  for (int i = 0; i < nums.size(); i++) {
    can &= PS[i] >= nums[i];
  }

  return can;
}

int main() {
  vector<pair<vector<int>, vector<vector<int>>>> test_cases = {
      {{1, 0, 1}, {{0, 2}}},
      {{4, 3, 2, 1}, {{1, 3}, {0, 2}}},
  };

  for (auto &t : test_cases) {
    cout << isZeroArray(t.first, t.second) << endl;
  }
  return 0;
}