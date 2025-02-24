#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3};

  int nums_size = nums.size();
  vector<vector<int>> answer;
  for (int mask = 0; mask <= (1 << nums_size); mask++) {
    vector<int> current_subset;
    for (int i = 0; i < nums_size; i++) {
      if (mask & (1 << i)) {
        current_subset.push_back(nums[i]);
      }
    }
    answer.push_back(current_subset);
  }

  return 0;
}