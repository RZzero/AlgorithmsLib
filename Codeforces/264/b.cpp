// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;


int main(){
  int N;
  Long answer = 0;
  cin >> N;
  vector<int> V(N);
  int maxi = -1;
  int distanceFromMax = 1;
  for(int i = 0; i < N; i++) {
    int dum;
    cin >> dum;
    if (dum > maxi) {
      maxi = dum;
      distanceFromMax = i;
    }
    V[i] = dum;
  }

  if (N == 1) cout << V[0] << endl;
  else {
    cout << maxi + (distanceFromMax - distanceFromMax > 0 ? -1 : 0) << endl;
    // cout << distanceFromMax << endl;
  }

  return 0;
}