#include <bits/stdc++.h>
  
using namespace std;

int main() {
  int N;
  int maxi = -1;
  vector<int> FRQ(2*1e5, 0);
  cin >> N;
  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    FRQ[dum]++;
  }

  for (int i = 2*1e5-1; i >=0; i--) {
    if (FRQ[i] == 0) continue;
    if (FRQ[i] % 2 != 0) {
      cout << "Conan" << endl;
      return 0;
    }
  }

  cout << "Agasa" << endl;
  return 0;
}