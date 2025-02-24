#include <bits/stdc++.h>
using namespace std;

int count_mismatches(string &S, string &T) {
  int mismatches = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != T[i]) {
      mismatches++;
    }
  }
  return mismatches;
}

int main() {
  int K;
  string S, T;
  cin >> K >> S >> T;
  int size_of_s = S.size();
  int size_of_t = T.size();
  // Delete one character from  S.
  // Choose one character in  S and replace it with another character.
  if (S.size() == T.size()) {
    int mismatches = count_mismatches(S, T);
    if (mismatches <= 1) {
      cout << "Yes" << endl;
      return 0;
    }
  } else if (abs(size_of_s - size_of_t) <= 1) {
    // Insert any one character at any position in S (possibly the beginning or end).
    int i = 0;
    int j = 0;
    int times_volado = 0;
    while (i < size_of_s && j < size_of_t) {
      if (S[i] == T[j]) {
        i++;
        j++;
      } else {
        if (size_of_s + 1 == size_of_t) {
          j++;
        } else {
          i++;
        }
        times_volado++;
      }
    }
    if (times_volado <= 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}