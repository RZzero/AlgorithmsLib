#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  while (N--) {
    string S;
    cin >> S;
    bool can = false;
    for (int i = 0; i < S.size() - 1; i++) {
      if (S[i] == 'i' && S[i + 1] == 't')
        can = true;
    }
    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}