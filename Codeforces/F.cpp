#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--) {
    string S;
    cin >> S;
    int qtty = 1;

    if (S.size() == 1 && S[0] >= 'a') {
       cout << "YES" << endl;
       continue;
    }


    bool twoUpperCase = false; 
    for(int i = 1; i < S.size(); i++){
      if (S[i] < 'a') qtty++;
    }

    if (qtty > 7 || S[0] < 'a') cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}
