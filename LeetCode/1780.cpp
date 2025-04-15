#include <bits/stdc++.h>
using namespace std;
using Long = long long;
bool checkPowersOfThree(int n) {
  int resto = n;
  while (true) {
    if (resto < 2)
      break;

    int sobra = resto % 3;
    if ((resto % 3 == 0) || (sobra == 1 && (resto - sobra) % 3 == 0)) {
      resto = resto / 3;
    } else {
      break;
    }
  }
  return resto <= 1;
}
int main() {
  vector<int> test_cases = {12, 91, 21};

  for (auto &n : test_cases) {
    cout << checkPowersOfThree(n) << endl;
  }
  return 0;
}