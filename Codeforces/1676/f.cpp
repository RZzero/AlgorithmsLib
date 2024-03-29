#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, K;
    cin >> N >> K;

    map<int, int> numbers_cnt;
    vector<int> maybes;

    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      numbers_cnt[n]++;
    }

    for (auto [number, count] : numbers_cnt) {
      if (count >= K) {
        maybes.push_back(number);
      }
    }

    int answer = maybes.size() > 0 ? 1 : -1;
    int answer_L = maybes.size() > 0 ? maybes[0] : -1;
    int answer_R = maybes.size() > 0 ? maybes[0] : -1;
    for (int i = 1; i < maybes.size();) {
      int segment_size = 1;
      int L = maybes[i - 1];
      while (maybes[i] - maybes[i - 1] <= 1 && i < maybes.size()) {
        segment_size++;
        i++;
      }
      i++;
      int R = L + segment_size - 1;

      if (segment_size > answer) {
        answer_L = L;
        answer_R = R;
        answer = max(answer, R - L + 1);
      }
    }

    if (answer == -1) {
      cout << -1 << endl;
    } else {
      cout << answer_L << " " << answer_R << endl;
    }
  }
  return 0;
}

/*
1
7 2
11 11 12 13 13 14 14

*/