#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  auto get_cost = [](string a, string b) -> int {
    int answer = 0;
    for (int i = 0; i < a.size(); i++) {
      answer += abs((a[i]-'a')-(b[i]-'a'));
    }
    return answer;
  };

  while (T--) {
    int N, M;
    cin >> N >> M;
    int answer = 1e9 / 2;

    vector<string> words(N);
    for (auto &s: words) cin >> s;

    for (int i = 0; i < N; i++) {
      for (int j = i+1; j < N; j++) {
        answer = min(answer, get_cost(words[i], words[j]));
      }
    }

    cout << answer << endl;
  }
  return 0;
}