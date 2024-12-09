#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  string S;
  cin >> S;

  // Is it worth moving current character to the left??!!
  string current = S;
  string answer = S;

  for (int i = 0; i < S.size(); i++) {
    if (i + 1 >= S.size())
      continue;
    for (int j = min(i + 9, (int)S.size() - 1); j > i; j--) {
      // si la diferencia hasta [i] > numero actual en i, disminuye por la cantidad que se movió
      if (current[j] > current[j - 1] && (((int)current[j] - (int)current[j - 1]) > 1)) {
        current[j]--;
        swap(current[j], current[j - 1]);
        // answer = max(answer, current);
      }
    }
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}