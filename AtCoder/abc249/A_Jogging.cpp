#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;

  int takahashi = 0;
  int aoki = 0;
  int resting_takahashi = 0;
  int resting_aoki = 0;

  for (int i = 0; i < X; i++) {
    if (i % (A + C) < A) {
      takahashi += B;
    }

    if (i % (D + F) < D) {
      aoki += E;
    }
  }

  if (takahashi == aoki)
    cout << "Draw" << endl;
  else if (takahashi > aoki)
    cout << "Takahashi" << endl;
  else
    cout << "Aoki" << endl;
  return 0;
}