// https://cses.fi/problemset/task/1069
#include <iostream>

using namespace std;

int main () {
  string S;
  cin >> S;

  int answer = 1;
  int current_max = 1;
  for (int i = 1; i < S.size(); i++) {
    if (S[i-1] == S[i]) {
      current_max++;
    } else {
      answer = max(answer, current_max);
      current_max = 1;
    }
  }
  
  answer = max(answer, current_max);
  cout << answer << endl;
  return 0;
}
