#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    bool mult = true;
    for (int i = 1; i <= N; i++) {
      bool initial = i % 2 == 1;
      string line = "";
      for (int j = 1; j <= N; j++) {
        if (initial) {
          line += "##";
        } else {
          line += "..";
        }
        initial = !initial;
      }
      cout << line << endl;
      cout << line << endl;
    }
  }
  return 0;
}