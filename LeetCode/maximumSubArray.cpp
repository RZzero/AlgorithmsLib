#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
  if (nums.size() == 1) return nums[0];
  long long answer = INT_MIN;
  vector<int> PS(nums.size() + 1, 0);
  for (int i = 1; i < PS.size(); i++) {
    PS[i] = PS[i-1] + nums[i-1];
  }
  for (int i = 0; i < PS.size(); i++) {
    for (int j = i+1; j < PS.size(); j++) {
      answer = max(PS[j] * 1LL -PS[i] * 1LL, answer * 1LL);
    }
  }
  return answer;
}
int main () {
  vector<int> test = {-1,-2};
  cout << maxSubArray(test) << endl;
  return 0;
}
