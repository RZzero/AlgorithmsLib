#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<bool>> graph(N + 1);

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      int cur;
      cin >> cur;
      if (cur)
        cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}