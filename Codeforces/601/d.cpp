// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

int main(){
  int T;
  cin >> T;
  while(T--){
    int r,c, k;
    cin >> r >> c >> k;
    vector<string> table(r);
    for(int i = 0; i < r; i++){
      string s;
      cin >> s;
      table[i] = s;
    }

    int cellsWithRice = 0;
    for(int i = 0; i < r; i++){
      for(int j = 0; j < table[i].size(); j++){
        if (table[i][j] == 'R') cellsWithRice++;
      }
    }

    string selectedAlphabet = alphabet.substr(0, k);
    vector<int> hwmany(k, 0);
    
    int distribute = cellsWithRice / k;
    int take = cellsWithRice % k;

    for(int i = 0; i < hwmany.size(); i++){
      hwmany[i] = distribute;
    }

    for(int i = 0; i < take; i++){
      hwmany[i] += 1;
    }

    int evaluatingChicken = 0;
    for(int i = 0; i < r; i++){
      if ((i + 1 ) % 2 != 0) {
        for (int j = 0; j < table[i].size(); j++){
          if (table[i][j] == 'R') {
            table[i][j] = selectedAlphabet[evaluatingChicken];
            hwmany[evaluatingChicken]--;
            if (hwmany[evaluatingChicken] == 0
              && evaluatingChicken + 1 < selectedAlphabet.size()) {
              evaluatingChicken++;
            }
          } else {
            table[i][j] = selectedAlphabet[evaluatingChicken];
          }
        }
      } else {
        for(int j = table[i].size() - 1; j >= 0; j--){
          if (table[i][j] == 'R') {
            table[i][j] = selectedAlphabet[evaluatingChicken];
            hwmany[evaluatingChicken]--;
            if (hwmany[evaluatingChicken] == 0
              && evaluatingChicken + 1 < selectedAlphabet.size()) {
              evaluatingChicken++;
            }
          } else {
            table[i][j] = selectedAlphabet[evaluatingChicken];
          }
        }
      }
    }

    for(int i = 0; i < r; i++){
      cout << table[i] << endl;
    }

  }
  return 0;
}