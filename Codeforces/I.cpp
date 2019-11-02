#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  int AS, Negate;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> AS >> Negate;

    vector<int> POS;
    vector<int> NEG;

    for(int k = 0; k < AS; k++){
      int number; cin >> number;
      if (number >= 0) {
        POS.push_back(number);
      } else {
        NEG.push_back(number);
      }
    }

    sort(POS.begin(), POS.end());
    sort(NEG.begin(), NEG.end());

    int sum = 0;
    if (NEG.size() == 0) {
      if (Negate % 2 != 0) {
        POS[0] = POS[0] * -1;
      }
      for(int k = 0; k < POS.size(); k++){
        sum+= POS[k];
      }
      cout << sum << endl;

    } else {
      if (Negate <= NEG.size()) {
        for(int k = 0; k < Negate; k++){
          NEG[k] = NEG[k] * -1;
        }
        for(auto &l: NEG) sum+= l;
        for(auto &p: POS) sum+= p;
        cout << sum << endl;
      } else {
        for (int k = 0; k < NEG.size(); k++) {
          NEG[k] = NEG[k] * -1;
        }

        int operations = Negate - NEG.size();
        if (operations %2 != 0) {
          if (POS.size() == 0) {
            NEG.back()*=-1; 
          } else {
            if (POS[0] < NEG[NEG.size()-1]) {
              POS.front()*=-1;
            }else{
              NEG.back()*=-1; 
            }
          }
        }
        for(auto &l: NEG) sum+= l;
        for(auto &p: POS) sum+= p;
        cout << sum << endl;
      }
    }

  }

  return 0;
}
