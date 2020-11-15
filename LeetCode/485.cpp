#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums = { 1, 1, 0, 1 };

  int max_so_far = 0;

  int current_count;
  for (int i = 0; i < nums.size();) {
    current_count = 0;
    while(i < nums.size() && nums[i] == 1) {
      current_count++;
      i++;
    }
    i++;
    max_so_far = max(max_so_far, current_count);
  }

  max_so_far = max(max_so_far, current_count);

  cout << max_so_far << endl;
  return 0;
}
