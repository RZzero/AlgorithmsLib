// https://onlinejudge.org/external/117/11799.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  scanf("%d", &T);
  for(int i = 1; i <= T; i++) {
    int N; cin >> N;
    int maxi = INT_MIN;

    for (int i = 0; i < N; i++) {
      int dum; cin >> dum;
      maxi = max(maxi, dum);
    }

    printf("Case %d: %d\n", i, maxi);
  }
  return 0;
}
