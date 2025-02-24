#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  char first, second;
  string S;
  cin >> N >> first >> second >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != first)
      S[i] = second;
  }

  cout << S << endl;
  return 0;
}