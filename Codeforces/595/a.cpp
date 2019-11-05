#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while(T--) {
    int N;
    cin >> N;
    vector<int> V(N);
    for(auto &v: V) cin >> v;

    sort(V.begin(), V.end());

    if(N == 1) cout << 1 << endl;
    else if (N == 2) {
      if (abs(V[0]-V[1]) > 1) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    } else {
      bool can = true;
      for(int i = 1; i < N; i++){
        if (abs(V[i-1]- V[i]) <= 1) can = false;
      }
      if (can) cout << 1 << endl;
      else cout << 2 << endl;
    }
  }
  return 0;
}

/*
2 10 1 20
1 2 10 20

*/