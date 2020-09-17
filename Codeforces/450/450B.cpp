#include <bits/stdc++.h>

using namespace std;
using Long = long long;
Long MOD = 1000000007;
Long ANW[6];

Long MODU(Long X) {
  return ((X%MOD) + MOD) % MOD;
}

int main(){
  Long X,Y, n;
  cin >> X >> Y >> n;
  ANW[0] = MODU(X);
  ANW[1] = MODU(Y);

  for(int i = 2; i < 6; i++){
    ANW[i] = MODU(ANW[i-1] - ANW[i-2]);
  }

  cout << ANW[(n-1)%6] << endl;
  cout << -1%MOD << endl;
  return 0;
}


/*
F[1] = x
F[2] = y

F[2] = F[1] + F[3]
........ Ya ni se despejar :) ... 
F[3] = F[1] - F[2] = x - y

F[3] = F[2] + F[4]
F[4] = F[2] - F[3] = y - (x - y) = -x

F[5] = F[3] - F[4] = x-y - (-x) = -y

F[6] = F[4] - F[5] = -x - (-y) = -x + y

F[7] = F[5] - F[6] = -y - (-x + y) = x
F[8] = F[6] - F[7] = -x + y - (x) = y
??? repeat ???
*/