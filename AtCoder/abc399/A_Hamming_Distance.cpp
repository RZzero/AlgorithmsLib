#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;

  int diff = 0;

  for (int i = 0; i < N; i++)
    if (S[i] != T[i])
      diff++;
  cout << diff << endl;
  return 0;
}