#include <bits/stdc++.h>

using namespace std; 


int main(){
  int N, D;

  cin >> N >> D;
  vector<int> V;

  for(int i = 0; i < N; i++){
    int dummy; cin >> dummy;
    V.push_back(dummy);
  }

  sort(V.begin(), V.end());

  int answer = 0;
  for(int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      if (V[j] - V[i] <= D) {
        answer = max(answer, j - i + 1);
      }
    }

  }

  cout << (N == 1 ? 0 : N-answer) << endl;

  return 0;
}
