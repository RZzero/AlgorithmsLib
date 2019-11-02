#include <bits/stdc++.h>
using namespace std;

string mySubstr(int from, int to, string &s) {
  string new_s="";
  for(int i = from; i < to; i++) new_s+= s[i];
  return new_s;
}

int main() {
  string s, anw = "";
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'B') {
      if (anw.size() <= 1) anw = "";
      else anw = mySubstr(0, anw.size()-1, anw);

    } else{ anw+= s[i]; }
  }
  cout << anw << endl;
  return 0;
}
