#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  int a_cnt = 0;

  for (auto &s : S) {
    if (s == 'a')
      a_cnt++;
  }

  int current_size = S.size();
  while (a_cnt <= current_size / 2) {
    current_size--;
  }

  cout << current_size << endl;

  return 0;
}