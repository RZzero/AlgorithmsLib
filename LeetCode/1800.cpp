#include <bits/stdc++.h>
using namespace std;

int maxAscendingSum(vector<int> &nums) {
  int answer = 0;
  int current_max = 0;
  int current_sum = 0;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > current_max) {
      current_sum += nums[i];
      current_max = max(nums[i], current_max);
      answer = max(answer, current_sum);
    } else {
      current_max = nums[i];
      current_sum = nums[i];
      answer = max(answer, current_sum);
    }
  }

  return answer;
}

int main() {
  vector<vector<int>> test_cases = {
      {10, 20, 30, 5, 10, 50},
      {10, 20, 30, 40, 50},
      {12, 17, 15, 13, 10, 11, 12},
  };

  for (auto &t : test_cases) {
    cout << maxAscendingSum(t) << endl;
  }
  return 0;
}