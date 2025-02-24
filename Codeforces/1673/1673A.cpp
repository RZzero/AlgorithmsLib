#include <bits/stdc++.h>
using namespace std;

using Long = long long;

Long get_string_score(string &S) {
  Long score = 0;
  for (auto &s : S) {
    score += (s - 'a') + 1;
  }
  return score;
}

void solve() {
  string S;
  cin >> S;

  const int size_of_s = S.size();

  if (size_of_s == 1) {
    cout << "Bob " << get_string_score(S) << endl;
  } else if (size_of_s % 2 == 0) {
    cout << "Alice " << get_string_score(S) << endl;
  } else {
    Long score = get_string_score(S);
    Long alices = 0;
    Long bobs = 0;
    if (S[0] > S[size_of_s - 1]) {
      bobs = (int)S[size_of_s - 1] - 'a' + 1;
      alices = score - bobs;
    } else {
      bobs = (int)S[0] - 'a' + 1;
      alices = score - bobs;
    }

    // cerr << alices << " " << bobs << endl;
    if (alices > bobs) {
      cout << "Alice " << abs(alices - bobs) << endl;
    } else {
      cout << "Bob " << abs(alices - bobs) << endl;
    }
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}