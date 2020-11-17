#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "paper", t = "paper";
  map<char, char> mapa;
  set<char> tS;
        
  for (int i = 0; i < s.size(); i++) {
    if (!mapa.count(s[i]))
      mapa[s[i]] = t[i];
      
    tS.insert(t[i]);
  }

  string answer = "";
  for (auto &c: s) {
    answer += mapa[c];
  }

  cout << (answer == t && tS.size() == mapa.size()) << endl;
  return 0;
}
