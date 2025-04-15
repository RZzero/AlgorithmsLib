#include <bits/stdc++.h>

using namespace std;
long long gauss(int n) {
  return (n * (n + 1)) / 2;
}
long long coloredCells(int n) {
  long long newly = gauss(n - 1) * 4;
  return newly + 1;
}

int main() {
  vector<int> test_cases = {1, 2, 3, 4};

  for (auto &n : test_cases) {
    cout << coloredCells(n) << endl;
  }
  return 0;
}