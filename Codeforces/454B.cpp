#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> V(N + 1);

  int discrepancies = 0, first_d = 0;

  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    V[i] = dum;
  }

  for(int i = 0; i < N-1; i++){
    if (!discrepancies && V[i] > V[i+1]) {
      first_d = i;
      discrepancies++;
    }else if (V[i] > V[i+1]) {
      discrepancies++;
    }
  }

  if (discrepancies > 1 || (V[N-1] > V[0] && discrepancies)){
    cout << -1 << endl;
  }else {
    cout << (discrepancies == 0 ? 0 : N - first_d - 1) << endl;
  }
  return 0;
}