#include <bits/stdc++.h>
using namespace std;

int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
  int answer = 0;

  if (numOnes + numZeros >= k)
    answer = min(k, numOnes);
  else
    answer = (numOnes) - (k - (numOnes + numZeros));

  return answer;
}

int main() {
  vector<tuple<int, int, int, int>> test_cases = {
      {3, 2, 0, 2},
      {3, 2, 0, 4},
  };

  for (auto &t : test_cases) {
    auto [ones, zeros, nones, k] = t;
    cout << kItemsWithMaximumSum(ones, zeros, nones, k) << endl;
  }
  return 0;
}