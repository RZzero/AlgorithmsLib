#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  if (N == 1) {
    cout << (S[0] == '1' ? "Yes" : "No") << endl;
    return 0;
  }

  bool can = true;
  for(int i = 1; i < N; i++){
    if (S[i-1] == S[i] && S[i] == '1') can = false;
  }

  for(int i = 1; i < N-1; i++){
    if (S[i] == '0' && S[i-1] == S[i] && S[i+1] == '0') can = false;
  }

  if (N > 1 && ((S[0] == '0' && S[1] == '0')
    || (S[N-1] == '0' && S[N-2] == '0'))) {
    can = false;
  }
  cout << (can ? "Yes" : "No") << endl;
}