#include <bits/stdc++.h>
using namespace std;

string to_bin(int N) {
  string answer = "";
  while (N) {
    if (N & 1) {
      answer += '1';
    } else {
      answer += '0';
    }
    N >>= 1;
  }

  reverse(answer.begin(), answer.end());
  return answer;
}

int main() {
  for (int i = 0; i <= 12; i++) {
    cerr << i << ": " << to_bin(i) << endl;
  }
  return 0;
}