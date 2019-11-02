#include <bits/stdc++.h>
using namespace std;

int main () {
  string s;
  cin >> s;
  bool good = true;

  for(int i = 1 ; i < s.size(); i++){
    if (s[i-1] == s[i]) good = false;
  }

  if (good) cout << "Good" << endl;
  else cout << "Bad" << endl;
  return 0;
}