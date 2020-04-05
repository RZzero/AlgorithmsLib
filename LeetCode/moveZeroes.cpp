#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
  int L = 0, R = 1;

  while (L < nums.size() && R < nums.size()) {
    if (nums[L] != 0) {
      L++;
      R = L + 1;
    } else if ((nums[L] == 0 && nums[R] != 0)) {
      swap(nums[L], nums[R]);
      L++;
      R = L + 1;
    } else {
      R++;
    }
  }

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " "; 
  }
}

int main(){
  vector<int> raro = {1};
  moveZeroes(raro);
  return 0;
}