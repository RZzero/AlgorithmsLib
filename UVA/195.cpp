// https://onlinejudge.org/external/1/195.pdf
#include <bits/stdc++.h>

using namespace std;

bool comparator(const char &x, const char &y) {
  char lowered_x = tolower(x);
  char lowered_y = tolower(y);
  if (lowered_x != lowered_y) {
    return lowered_x < lowered_y;
  }

  if (x == y) return false;
  if (lowered_x == lowered_y) {
    if (x >= 'A' && x <= 'Z' && y >= 'a' && y <= 'z') {
      return true;
    }
  }

  return false;
}

int main () {
  int T;
  cin >> T;

  while (T--) {
    string S;
    cin >> S;
    vector<string> permutations;
    sort(S.begin(), S.end(), comparator);

    do {
      permutations.push_back(S);
    } while(next_permutation(S.begin(), S.end(), comparator));

    for (auto p: permutations) {
      cout << p << endl;
    }
  }
  return 0;
}
