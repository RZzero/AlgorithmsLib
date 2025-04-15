#include <bits/stdc++.h>
using namespace std;

int main() {
  string S = "";
  string aha = "Hello! Can you please tell me how many tests does this problem have?";

  string cur;
  while (getline(cin, cur)) {
    S += cur;
    cur = "";
  }

  // cerr << S << endl;
  cout << 1 << endl;
  // if (S == aha) {
  //   cout << 25 << endl;
  // } else {
  //   cout << 1 << endl;
  // }
}