#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int> &nums) {
  int answer = 0;

  for (int i = 0; i < nums.size() && answer != -1; i++) {
    if (nums[i] == 1)
      continue;
    if (i + 1 >= nums.size() || i + 2 >= nums.size()) {
      answer = -1;
      continue;
    }

    for (int j = 0; j < 3; j++) {
      nums[i + j] = !nums[i + j];
    }
    answer++;
  }
  return answer;
}
int main() {
  vector<vector<int>> test_cases = {
      {0, 1, 1, 1, 0, 0},
      {0, 1, 1, 1},
  };

  for (auto &t : test_cases) {
    cout << minOperations(t) << endl;
  }
  return 0;
}