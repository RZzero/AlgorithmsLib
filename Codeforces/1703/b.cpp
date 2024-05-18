#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int answer = 0;
    set<char> seto;

    for (auto &c : S) {
      if (!seto.count(c)) {
        answer += 2;
        seto.insert(c);
      } else {
        answer++;
      }
    }
    cout << answer << endl;
  }
  return 0;
}