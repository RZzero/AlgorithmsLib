#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    string s;
    cin >> s;
    int size_of_s = s.size();
    int answer = 0;
    for (int i = 0, j = 1; i < size_of_s && j < size_of_s;) {
      if (s[i] == s[j]) {
        answer++;
        j++;
      } else {
        i = j;
        j++;
      }
    }
    cout << answer << endl;
  }
  return 0;
}