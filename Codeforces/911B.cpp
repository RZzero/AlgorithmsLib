#include <bits/stdc++.h>
using namespace std;

int main () {
  int N, A, B;
  cin >> N >> A >> B;

  int answer = -1;
  for (int platesForA = 1; platesForA < N; platesForA++) {
    int platesForB = N-platesForA;
    // cout << "platesForA " << platesForA << " " << "platesForB " << platesForB << endl;
    // cout << " A " << A << " B " << B << endl;
    if (A < platesForA || B < platesForB) continue;

    int piecesForA = A/platesForA;
    int piecesForB = B/platesForB;
    // cout << "piecesForA " << piecesForA << " piecesForB " << piecesForB << endl;
    int mini = min(piecesForA, piecesForB);
    answer = max(mini, answer);
  }
  cout << answer << endl;
  return 0;
}
