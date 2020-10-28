#include <bits/stdc++.h>

using namespace std;

vector<int> countBits(int num) {
  vector<int> answer(num+1);
  for (int mask = 0; mask <= num; mask++) {
    int k = mask;
    while(k) {
      if (k & 1) answer[mask]++;
      k >>= 1;
    }
  }
  return answer;
}

int main() {
  cout << countBits(5) << endl;
  return 0;
}