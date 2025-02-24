#include <bits/stdc++.h>
using namespace std;

int minimizeXor(int num1, int num2) {
  int bits_left = 0;
  while (num2) {
    if (num2 & 1) {
      bits_left++;
    }
    num2 >>= 1;
  }

  int answer = 0;
  for (int i = 30; i >= 0 && bits_left > 0; i--) {
    if (num1 & (1 << i)) {
      answer |= (1 << i);
      bits_left--;
    }
  }

  // TODO: Should I just randomly put it ltr if there are any bits_left?
  for (int i = 0; i <= 30 && bits_left > 0; i++) {
    if (!(answer & (1 << i))) {
      answer |= (1 << i);
      bits_left--;
    }
  }
  // cout << answer << endl;
  return answer;
}
int main() {
  vector<pair<int, int>> test_cases = {{3, 5}, {1, 12}};
  for (auto &t : test_cases) {
    cout << minimizeXor(t.first, t.second) << endl;
  }
  return 0;
}