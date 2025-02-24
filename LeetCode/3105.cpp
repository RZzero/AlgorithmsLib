#include <bits/stdc++.h>
using namespace std;

int longestMonotonicSubarray(vector<int> &nums) {
  int decreasing = 1;
  int increasing = 1;

  int current_increasing = 1;
  int current_decreasing = 1;

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > nums[i - 1]) {
      current_increasing++;
      increasing = max(increasing, current_increasing);
      current_decreasing = 1;
    } else if (nums[i] < nums[i - 1]) {
      current_decreasing++;
      decreasing = max(decreasing, current_decreasing);
      current_increasing = 1;
    } else {
      current_decreasing = 1;
      current_increasing = 1;
    }
  }

  return max(decreasing, increasing);
}

int main() {
  vector<vector<int>> test_cases = {
      {1, 4, 3, 3, 2},
      {3, 3, 3, 3},
      {3, 2, 1},
  };

  for (auto &t : test_cases) {
    cout << longestMonotonicSubarray(t) << endl;
  }
  return 0;
}