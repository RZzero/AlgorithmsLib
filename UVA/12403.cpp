// https://onlinejudge.org/external/124/12403.pdf
#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;

  int balance = 0;
  while (T--){
    string command;
    cin >> command;
    if (command == "report") {
      cout << balance << endl;
    } else {
      int amount; cin >> amount;
      balance+= amount;
    }
  }
  return 0;
}
