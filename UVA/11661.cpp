// https://onlinejudge.org/external/116/11661.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int N;

  while (cin >> N) {
    if (!N) break;

    string S;
    cin >> S;

    bool hasZ = false;

    int min_distance = INT_MAX;
    int i,j;

    for (i = 0, j = 1; i < N && j < N;) {
      while (S[j] == '.' && j < N) j++;
      while (S[i] == '.' && i < N && i < j-1) i++;

      if (S[i] == 'Z' || S[j] == 'Z') {
        hasZ = true;
        break;
      } else if (S[i] != '.' && S[j] != '.' && S[i] != S[j] && j < N){
        min_distance = min(min_distance, j-i);
      }
      i++;
      j++;
    }

    if (hasZ || (min_distance == INT_MAX)) cout << 0 << endl;
    else {
      cout << min_distance << endl;
    }
  }
  return 0;
}
