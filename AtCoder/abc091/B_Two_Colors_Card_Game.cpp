#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  string S;
  cin >> N;
  map<string, int> cards_value;
  int answer = 0;

  for (int i = 0; i < N; i++) {
    cin >> S;

    if (!cards_value.count(S)) {
      cards_value[S] = 0;
    }

    cards_value[S]++;
  }

  cin >> M;
  for (int i = 0; i < M; i++) {
    cin >> S;
    if (!cards_value.count(S)) {
      cards_value[S] = 0;
    }
    cards_value[S]--;
  }

  for (auto &cv : cards_value) {
    answer = max(answer, cv.second);
  }

  cout << answer << endl;
  return 0;
}