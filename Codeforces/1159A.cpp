#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
  int N, cntP = 0, cntM = 0;
  string s;
  cin >> N >> s;
  int PileQtty = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '+') {
      PileQtty++;
    } else {
      if (PileQtty > 0) {
        PileQtty--;
      }
    }
  }

  cout << PileQtty << endl;
  return 0;
}