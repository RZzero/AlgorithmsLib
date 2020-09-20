// https://onlinejudge.org/external/125/12577.pdf
#include<bits/stdc++.h>

using namespace std;

int main () {
  string s;
  int case_number = 1;
  while (cin >> s) {
    if (s == "*") break;
    string answer;
    if (s == "Hajj") {
      answer = "Hajj-e-Akbar";
    } else {
       answer = "Hajj-e-Asghar";
    }

    cout << "Case " << case_number << ": " << answer << endl;
    case_number++;
  }
  return 0;
}
