// https://onlinejudge.org/external/2/272.pdf
#include <iostream>
using namespace std;

int main () {
  string S;
  bool toggler = true;
  string first = "``";
  string second = "''";
  while (getline(cin, S)) {
    string answer = "";
    for (int i = 0; i < S.size(); i++) {
      if (S[i] == '"') {
        if (toggler) {
          answer += first;
        } else {
          answer += second;
        }
        toggler = !toggler;
      } else {
        answer += S[i];
      }
    }
    cout << answer << endl;
  }
  return 0;
}