#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
  vector<int> answer(nums.size(), 0);
  vector<int> PS(nums.size(), 0);
  vector<int> SS(nums.size(), 0);

  int last_number_answer = 1;
  for (int i = 0; i < nums.size(); i++) {
    if (i == 0) PS[i] = nums[0];
    else PS[i] = PS[i-1] * nums[i]; 
    if (i != nums.size() -1) last_number_answer*= nums[i];
  }

  int first_number_answer = 1;
  int last = nums.size()-1;
  for (int i = last; i >= 0; i--) {
    if (i == last) SS[i] = nums[last];
    else SS[i] = SS[i + 1] * nums[i];
    if (i != 0) first_number_answer*= nums[i];
  }

  int upperLimit = ((int) nums.size()) - 1;
  for (int i = 1; i < upperLimit; i++) {
    answer[i] = PS[i-1] * SS[i+1];
  }
  answer[0] = first_number_answer;
  answer[last] = last_number_answer;

  return answer;
}

int main () {

  vector<int> input = { 1, 2, 3, 4 };
  productExceptSelf(input);
  return 0;
}