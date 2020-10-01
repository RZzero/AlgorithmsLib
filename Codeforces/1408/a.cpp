//https://codeforces.com/problemset/problem/1408/A
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);

    for(auto &n: a) cin >> n;
    for(auto &n: b) cin >> n;
    for(auto &n: c) cin >> n;
    vector<int> answer(N);

    answer[0] = a[0];
    
    int first = answer[0];
    for (int i = 1; i < N; i++) {
      int last = answer[i-1];
      if (i != N-1) {
        if (a[i] != last) answer[i] = a[i];
        else if (b[i] != last) answer[i] = b[i];
        else if (c[i] != last) answer[i] = c[i];
      } else {
        if (a[i] != last && a[i] != first) answer[i] = a[i];
        else if (b[i] != last && b[i] != first) answer[i] = b[i];
        else if (c[i] != last && c[i] != first) answer[i] = c[i];
      }
    }

    for (auto &el: answer) {
      cout << el << " ";
    }
    cout << endl;
  }

  return 0;
}
