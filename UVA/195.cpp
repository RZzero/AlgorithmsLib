// https://onlinejudge.org/external/1/195.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    string S;
    cin >> S;
    vector<string> permutations;
    sort(S.begin(), S.end());

    do {
      permutations.push_back(S);
    } while(next_permutation(S.begin(), S.end()));

    sort(permutations.begin(), permutations.end(), comparator);
    for (auto p: permutations) {
      cout << p << endl;
    }
  }
  return 0;
}
