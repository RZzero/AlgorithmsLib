#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    string s; cin >> s;
    bool can = true;

    for(int j = 1; j < s.size(); j++){
      if ((s[j-1] == 'z' && s[j] == 'a') || (s[j-1]+1 == s[j])) continue;
      can = false;
      break;
    }
    
    if(!can) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}
