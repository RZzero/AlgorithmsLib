#include <bits/stdc++.h>

using namespace std;

int main() {
  int L, R;
  cin >> L >> R;

  vector<int> answer;
  for (int i = L; i <= R; i++) {
    int N = i;
    bool can = true;
    while (N > 0) {
      int digit = N % 10;
      if (digit != 0) {
        if (i % digit != 0) can = false;
      } else {
        can = false;
      }
      N /= 10;  
    }

    if (can)
      answer.push_back(i);
  }
  return 0;
}