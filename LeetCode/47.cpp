#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> nums = { 1,1,2 };
  sort(nums.begin(), nums.end());
  vector<vector<int>> answer;
  do {
    vector<int> elements;
    for (auto &el: nums) {
      elements.push_back(el);
    }
    answer.push_back(elements);
  } while(next_permutation(nums.begin(), nums.end()));

  //Print answer
  return 0;
}
