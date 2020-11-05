#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums = {6,5,4,8};
  
  vector<int> PS(504, 0);
  vector<int> frq(504, 0);

  for (int i = 0; i < nums.size(); i++) {
    frq[nums[i]]++;
  }

  for (int i = 0; i <= PS.size(); i++) {
    if (i == 0) PS[i] = frq[i];
    else PS[i] = PS[i-1] + frq[i];
  }

  vector<int> answer;
  for (auto &num: nums) {
    if (num == 0) answer.push_back(0);
    else answer.push_back(PS[num-1]);
  }
  
  for (auto &a: answer) {
    cout << a << " ";
  }
  return 0;
}