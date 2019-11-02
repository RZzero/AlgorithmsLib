#include<bits/stdc++.h>
using namespace std;

int main () {
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<int> V(N, 0);

  int L =0; int R = S.size()-1;
  for(int i = 0; i < S.size(); i++){
    if (S[i] == 'L') {
      V[L] = 1;
      L++;
    } else if (S[i] == 'R') {
      V[R] = 1;
      R--;
    } else {
      
    }
  }

  return 0;
}