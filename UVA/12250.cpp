// https://onlinejudge.org/external/122/12250.pdf

#include <bits/stdc++.h>

using namespace std;

int main () {
  map<string,string> salutes;
  salutes["HELLO"] = "ENGLISH";
  salutes["HOLA"] = "SPANISH";
  salutes["HALLO"] = "GERMAN";
  salutes["BONJOUR"] = "FRENCH";
  salutes["CIAO"] = "ITALIAN";
  salutes["ZDRAVSTVUJTE"] = "RUSSIAN";

  string cur;
  int case_number = 1;
  while (cin >> cur) {
    if (cur == "#") break;

    if (salutes.count(cur)) {
      cout << "Case " << case_number << ": " << salutes[cur] << endl;
    } else {
      cout << "Case " << case_number << ": " << "UNKNOWN" << endl;
    }

    case_number++;
  }
  return 0;
}
