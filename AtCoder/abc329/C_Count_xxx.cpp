#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  Long answer = 0;
  map<char, int> mapa;
  string abecedario = "abcdefghijklnmopqrstuvwxyz";

  for (auto &l : abecedario)
    mapa[l] = 0;

  int current_cnt = 0;
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      mapa[S[i]] = 1;
      current_cnt = 1;
    } else {
      if (S[i - 1] == S[i]) {
        current_cnt++;
        mapa[S[i]] = max(mapa[S[i]], current_cnt);
      } else {
        current_cnt = 1;
        mapa[S[i]] = max(mapa[S[i]], 1);
      }
    }
  }

  for (auto &l : mapa) {
    answer += l.second;
  }
  cout << answer << endl;
  return 0;
}