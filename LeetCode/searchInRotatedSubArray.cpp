#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

int binary_search_(int L, int R, vector<int>& nums, int& target) {

  int answer = -1;
  while (L <= R) {
    int mid = L + (R - L) / 2;
    if (nums[mid] == target) {
      answer = mid;
      break;
    } else if (nums[mid] < target) {
      L = mid + 1;
    } else {
      R = mid-1;
    }
  }

  return answer;
}

int search(vector<int>& nums, int target) {
  int p1, p2;
  bool foundPivot = false;

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] < nums[i-1]) {
      p1 = i-1;
      p2 = i;
      foundPivot = true;
      break;
    }
  }

  if (nums.size() == 0) return -1;
  if (nums.size() == 2) {
    return binary_search_(0, 2, nums, target);
  }

  if (!foundPivot) return binary_search_(0,nums.size() - 1, nums, target);
  return max(binary_search_(0,p1, nums, target),binary_search_(p2,nums.size()-1, nums, target));
}


int main () {
  vector<int> test = { 1, 3, 5 };
  int T = 6;
  cout << search(test, T) << endl;
  return 0;
}