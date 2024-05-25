#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long H;
  cin >> H;

  Long cur = 0;
  Long answer = 0;
  for (int i = 0;; i++) {
    cur += pow(2, i);
    answer++;
    if (cur > H) {
      break;
    }
  }

  cout << answer << endl;
  return 0;
}