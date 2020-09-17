#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  if (s.size() == 1){
    cout << s << endl;
  }
  int init = s.size() % 2 == 0 ? s.size() / 2 - 1 : s.size() / 2;
  int lefty = init -1;
  int righty = init + 1;
  string new_s = string(s.size(), ' ');
  for(; lefty > 0){

  }
  return 0;
}