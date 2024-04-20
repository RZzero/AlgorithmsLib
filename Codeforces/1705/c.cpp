#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, C, Q;
    cin >> N >> C >> Q;
    vector<pair<Long, Long>> queries;
    map<char, Long> alphabet;
    string S;
    cin >> S;
    Long current_size = S.size();

    for (int i = 0; i < S.size(); i++) {
      alphabet[S[i]] = current_size + 1;
      current_size++;
    }
  }
  return 0;
}