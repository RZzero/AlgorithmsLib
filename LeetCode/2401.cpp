#include <bits/stdc++.h>
using namespace std;

int longestNiceSubarray(vector<int> &nums) {
  int answer = 0;
  int prev = 0;
  for (int i = 1; i < nums.size(); i++) {
    int current = (nums[i] & nums[i - 1]) == 0 ? answer + 1 : 1;
    // cerr << current << endl;
    answer = max(current, answer);
  }
  return answer;
}

int main() {
  vector<vector<int>> test_cases = {
      {1, 3, 8, 48, 10},
      {3, 1, 5, 11, 13},

  };

  for (auto &t : test_cases) {
    cout << longestNiceSubarray(t) << endl;
  }
  return 0;
}