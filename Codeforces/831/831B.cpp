#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  map<char,char> keyboard;
  for(int i = 0 ; i < a.size(); i++){
    keyboard[a[i]] = b[i]; 
  }
  for(char i = '0'; i <= '9'; i++){
    keyboard[i] = i;
  }
  string anw = "";
  for(int i = 0; i < c.size(); i++){
    if((int)c[i] < 93){
      anw+= toupper(keyboard[tolower(c[i])]);
    }else {
      anw+= keyboard[c[i]];
    }
  }
  cout << anw << endl;
  return 0;
}