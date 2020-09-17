#include <bits/stdc++.h>
#define endl '\n';

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
  int N;
  cin >> N;
  while(N--){
    int l; cin >> l;
    string s; cin >> s;
    if(s.size() < 11) {
      cout << "NO"<< endl;
    }
    else {
      bool found = false; int cnt = 0;
      for(int i = 0; i < s.size(); i++){
        if(s[i] =='8') {
          found = true;
        }
        if(found) cnt++;
      }
      if (cnt >= 11) {cout << "YES" << endl;}
      else cout << "NO" << endl;
    }
  }
  return 0;
}