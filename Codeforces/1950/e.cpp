#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int answer = S.size();

    for (int i = 1; i <= N; i++) {
      if (N % i != 0)
        continue;

      bool can = true;
      string prefix_pattern = S.substr(0, i);
      string suffix_pattern = S.substr(N - i);

      int prefix_differ = 0, suffix_differ = 0;
      for (int j = 0; j < S.size(); j++) {
        if (S[j] != prefix_pattern[j % i])
          prefix_differ++;

        if (S[j] != suffix_pattern[j % i])
          suffix_differ++;

        if (prefix_differ > 1 && suffix_differ > 1) {
          can = false;
          break;
        }
      }

      if (can) {
        answer = min(i, answer);
        break;
      }
    }

    cout << answer << "\n";
  }
  return 0;
}