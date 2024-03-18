#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int answer = 1e9;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  for (int i = 0; i < N - M + 1; i++) {
    vector<int> have(N + 1, 0);

    for (int j = i; j < i + M; j++) {
      have[numbers[j]]++;
    }

    int mex = 0;
    while (have[mex]) {
      mex++;
    }
    answer = min(answer, mex);
  }

  cout << answer << endl;
  return 0;
}