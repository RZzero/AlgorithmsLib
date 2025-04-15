#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums) {
  int answer = 0;

  int sum;
  for (int i = 0; i < nums.size(); i++) {
    sum = i == 0 ? nums[i] : max(nums[i], sum + nums[i]);
    answer = max(answer, sum);
  }
  return answer;
}

int main() {

  vector<vector<int>> test_cases = {
      {-2, 1, -3, 4, -1, 2, 1, -5, 4},
      {1},
      {5, 4, -1, 7, 8},
  };

  for (auto &t : test_cases) {
    cout << maxSubArray(t) << endl;
  }
  return 0;
}