#include <bits/stdc++.h>
    
using namespace std;
typedef unsigned long long ull;
int main() {
  vector<ull> mset;
  
  for(int i = 0; i <= 60; i++){
    mset.push_back(1ull * pow(2,i));
  }
  
  ull n, k;
  cin >> n >> k;
  ull maxi = 0;

  for(int i = 0; i < mset.size(); i++){
    if (mset[i] <= n) maxi = mset[i];
  }

  if (k == 1 || n == 1) cout << n << endl;
  else {
    ull answer = (maxi | (maxi-1));
    cout << answer << endl;
  }
  return 0;
}