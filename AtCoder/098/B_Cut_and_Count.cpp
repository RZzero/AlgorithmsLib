#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  set<char> a, b;
  int answer = 0;
  for (int i = 0; i < N; i++) {
    a.insert(S[i]);
    b.clear();
    for (int j = i + 1; j < N; j++) {
      b.insert(S[j]);
    }

    int cnt = 0;
    for (int k = 'a'; k <= 'z'; k++) {
      if (a.count(k) && b.count(k)) {
        cnt++;
      }
    }
    answer = max(answer, cnt);
  }

  cout << answer << endl;
  return 0;
}