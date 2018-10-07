#include <bits/stdc++.h>
using namespace std;

set<char> vowels = { 'A', 'E', 'I', 'O', 'U', 'Y' };
string TUOPPER(char x){
  string s = "";
  s+=toupper(x);
  return s;
}

int main(){
  string s;
  getline(cin, s);
  string ns ="";
  for(int i = 0; i < s.size(); i++)
    ns+= (s[i] != ' ' ? TUOPPER(s[i]) : "");

  if(vowels.count(ns[ns.size()-2])) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}