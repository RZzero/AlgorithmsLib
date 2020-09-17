#include <bits/stdc++.h>

using namespace std; 
using Long = long long;
const Long INF = (1LL<<60)-1;
int main(){

  int n, m;
  cin >> n >> m;

  vector<Long> T,B;

  for(int i = 0; i < n; i++){
    Long dummy;
    cin >> dummy;
    T.push_back(dummy);
  }

  for(int i = 0; i < m; i++){
    Long dummy;
    cin >> dummy;
    B.push_back(dummy);
  }
  
  Long Maxim = -INF;
  int indexToDelete = -1;

  for (int i = 0; i < T.size(); i++){
    for(int j = 0; j < B.size(); j++){
      if (T[i] * B[j] > Maxim) {
        Maxim = T[i] * B[j];
        indexToDelete = i;
      }
    }
  }

  // cout << "TommysMax " << T[indexToDelete] << endl;

  Long answer = -INF;
  for (int i = 0; i < T.size(); i++){
    if (i == indexToDelete) continue;
    for(int j = 0; j < B.size(); j++){
      answer = max(answer, T[i] * B[j]);
    }
  }
  cout << answer << endl;
  return 0;
}
