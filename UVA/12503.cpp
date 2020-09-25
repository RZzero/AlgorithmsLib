// https://onlinejudge.org/external/125/12503.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  for (int i = 1; i <= T; i++) {
    int N;
    cin >> N;

    string s;
    vector<int> instructions(N+1, 0);

    for (int j = 1; j <= N; j++) {
      cin >> s;

      if (s == "LEFT") {
        instructions[j] = -1;
      } else if (s == "RIGHT"){
        instructions[j] = 1;
      } else {
        string trash;
        int pos;
        cin >> trash >> pos;
        instructions[j] = instructions[pos];
      }
    }

    int balance = 0;
    for (auto instruction: instructions)
      balance += instruction;
    
    cout << balance << endl;
  }
  return 0;
}
