#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    map<int, int> mapa;
    int N;
    cin >> N;
    Long answer = 0;
    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      mapa[n]++;
      if (mapa[n] % 2 == 0)
        answer++;
    }
    cout << answer << endl;
  }
  return 0;
}
/*
1
2 3
2 3
1 2 3
*/