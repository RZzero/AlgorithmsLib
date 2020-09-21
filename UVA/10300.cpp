// https://onlinejudge.org/external/103/10300.pdf
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

int main () {
  int N, T;
  cin >> T;
  while (T--) {
    cin >> N;
    Long answer = 0;
    Long a,b,c;
    for (int i = 0; i < N; i++) {
      cin >> a >> b >> c;
      answer += ceil(((a*1.0/b) * c) * b);
    }

    cout << answer << endl;
  }
  return 0;
}
