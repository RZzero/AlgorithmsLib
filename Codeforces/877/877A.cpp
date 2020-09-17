#include <bits/stdc++.h>
using namespace std;

int main(){
  set<string> friends = {"Danil", "Olya","Slava","Ann","Nikita"};
  int cnt = 0;
  string s;
  cin >> s;
  s = "/" + s + "/";
  for(int i = 0; i < s.size(); i++){
    for(int j = i+1; j < s.size(); j++){
      if(friends.count(s.substr(i,j-i + 1))){
        cnt++;
      }
    }
  }
  if(cnt == 1) cout << "YES" <<endl;
  else cout << "NO" << endl;  
}