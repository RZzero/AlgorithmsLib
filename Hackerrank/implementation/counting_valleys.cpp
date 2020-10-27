#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; string S;
  cin >> N >> S;

  int balance = 0;
  int answer = 0;
  for(auto &c: S) {
    if (c == 'U')  {
      balance++;
      if (balance == 0) {
        answer++;
      }
    }
    else if (c == 'D') balance--;
  }

  cout << answer << endl;
  return 0;
}
