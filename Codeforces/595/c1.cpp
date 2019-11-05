#include <bits/stdc++.h>

using namespace std;
using Long = unsigned long long;

vector<Long> powersOf3;

void generatePowersOf3(){
    // cout << "Limit " << log(1e18)/log(3) << endl;
    // cout << pow(3*1LL,500*1LL) << endl;
  for(Long i = 0; i < 38; i++){
    powersOf3.push_back(pow(3*1LL,i*1LL));
  }
}

int main() {
  generatePowersOf3();

  cout << powersOf3.size() << endl;
  // set<Long> unique;
  // vector<Long> PS(powersOf3.size() + 1, 0);
  // for(int i = 1; i <= PS.size(); i++){
  //   PS[i] = PS[i-1] + powersOf3[i-1];
  //   unique.insert(PS[i]);
  // }

  // for(int i = 0; i < powersOf3.size(); i++){
  //   if (!unique.count(powersOf3[i])) PS.push_back(powersOf3[i]);
  // }
  // sort(PS.begin(), PS.end());

  // for (int i = 0; i < PS.size(); i++) {
  //   cout << PS[i] << endl;
  // }
  return 0;
}

/*
2 10 1 20
1 2 10 20
*/