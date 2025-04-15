#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  string answer = "";
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '2') {
      answer += "2";
    }
  }
  cout << answer << endl;
  return 0;
}