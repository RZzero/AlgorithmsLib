#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> seto;
  vector<int> numbers = { 1, 2, 3, 1};

  for (auto &number: numbers) {
    if (seto.count(number)) {
      return true;
    } else {
      seto.insert(number);
    }
  }
  return false;

  return 0;
}