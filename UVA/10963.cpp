// https://onlinejudge.org/external/109/10963.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  freopen("10963.in", "r", stdin);
  freopen("10963.out", "w", stdout);
  int T;
  cin >> T;
  while (T--) {
    int W;
    cin >> W;

    vector<int> distances;
    for (int i = 0; i < W; i++) {
      int a,b;
      cin >> a >> b;
      distances.push_back(abs(a-b)+1);
    }
    bool can = true;

    for (int i = 1; i < distances.size(); i++) {
      if (distances[i] != distances[i-1])
        can = false;
    }

    string endll = T ? "\n\n" : "\n";
    if (can) cout << "yes" << endll;
    else cout << "no" << endll;
  }
  return 0;
}
