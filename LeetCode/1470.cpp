#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums = {2,5,1,3,4,7};
  int n = 3;
  vector<int> answer(2*n);
  for (int k = 0, i = 0, j = n; i < n; i++, j++, k+=2) {
    answer[k] = nums[i];
    answer[k+1] = nums[j];
  }
  
  return 0;
}