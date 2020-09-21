// https://onlinejudge.org/external/6/621.pdf

#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string S;
    cin >> S;
    int size_of_s = S.size();
    if (S == "1" || S == "4" || S == "78") {
      cout << '+' <<endl;
    } else if (S.size() >= 2
        && S[size_of_s-2] == '3' && S[size_of_s-1] == '5') {
      cout << '-' << endl;
    } else if (size_of_s >= 3 
        && S[0] == '9' && S[size_of_s-1] == '4') {
      cout << '*' << endl;
    } else {
      cout << '?' << endl;
    }
  }
  return 0;
}
