#include <bits/stdc++.h>
using namespace std;

bool comparator(string &a, string &b) {
  return a.size() < b.size();
}

int main() {
  string S;
  cin >> S;

  int size_of_s = S.size();
  for (int i = size_of_s - 2; i >= 0; i--) {
    if (S[i] == 'W' && S[i + 1] == 'A') {
      S[i] = 'A';
      S[i + 1] = 'C';
    }
  }
  cout << S << endl;
  return 0;
}