#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, c;
  char b;
  cin >> a >> b >> c;
  if (a < 0) {
    a = -a;
  }
  if (b < 0) {
    b = -b;
  }
  int to_sum = (c + a) == 0 ? 0 : (c + a) / 2;
  int answer = c + a + to_sum;

  // if (!answer) {
  // //   answer++;
  // // } else if (answer < 0) {
  // //   answer = -answer;
  // // }
  // cout
  cout << answer << endl;
  return 0;
}