#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> numbers = {9,6,4,2,3,5,7,0,1};
  
  int gauss_sum = (numbers.size() * (numbers.size() + 1)) / 2;
  int sum = accumulate(numbers.begin(), numbers.end(), 0);

  cout << gauss_sum - sum << endl;
  return 0;
}