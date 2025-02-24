#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums) {
  int mn = 1e9;
  int idx;
  int bad = 0;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] < mn) {
      mn = nums[i];
      idx = i;
    }
  }

  int current = mn;
  for (int i = idx; i < nums.size(); i++) {
    if (nums[i] < current) {
      bad++;
    }
    current = nums[i];
  }

  for (int i = 0; i <= idx; i++) {
    if (nums[i] < current) {
      bad++;
    }
    current = nums[i];
  }

  return bad <= 1;
}

int main() {
  vector<vector<int>> test_cases = {
      {3, 4, 5, 1, 2},
      {2, 1, 3, 4},
      {1, 2, 3},
  };

  for (auto &t : test_cases) {
    cout << check(t) << endl;
  }
  return 0;
}