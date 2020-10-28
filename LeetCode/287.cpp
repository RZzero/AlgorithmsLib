#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> numbers = {1,3,4,2,2};
  set<int> seto;

  for (auto &number: numbers) {
    if (seto.count(number)) return number;
    seto.insert(number);
  }
  return 0;
}