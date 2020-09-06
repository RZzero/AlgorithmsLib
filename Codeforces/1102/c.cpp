// https://codeforces.com/problemset/problem/1102/C
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main () {
  int N, X, Y;
  cin >> N >> X >> Y;
  vector<int> doors(N);
  int canKillFirstTry = 0;
  for (auto &door: doors) {
    cin >> door;
    if (X >= door) {
      canKillFirstTry++;
    }
  }

  if (X > Y) {
    cout << N << endl;
  } else {
    cout << ceil(canKillFirstTry*1.0/2) << endl;
  }

  return 0;
}