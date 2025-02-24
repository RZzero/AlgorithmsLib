#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int factorial(int n) {
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int n_choose_four(int n) {
  return factorial(n) / (24 * factorial(n - 4));
}

int tupleSameProduct(vector<int> &nums) {
  int answer = 0;
  map<int, int> mapa;

  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      mapa[nums[i] * nums[j]]++;
    }
  }

  for (auto [_, val] : mapa) {
    if (val > 1)
      answer += (val * (val - 1)) / 2;
  }

  return answer * 8;
};

int main() {
  vector<vector<int>> test_cases = {
      {2, 3, 4, 6},
      {1, 2, 4, 5, 10},
      {2, 3, 4, 6, 8, 12},
  };

  for (auto &test : test_cases) {
    cout << tupleSameProduct(test) << endl;
  }
  return 0;
}