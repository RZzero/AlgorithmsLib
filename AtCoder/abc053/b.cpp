#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int first_a = 1e9;
  int last_z = -1e9;

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'A')
      first_a = min(first_a, i);
    if (S[i] == 'Z')
      last_z = max(last_z, i);
  }

  cout << last_z - first_a + 1 << endl;
  return 0;
}