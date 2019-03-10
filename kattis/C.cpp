#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int n; cin >> n;
    set<string> seto;
    for(int i = 0; i < n; i++){
      string s;
      cin >> s;
      seto.insert(s);
    }
    cout << seto.size() << endl;
  }
  return 0;
}