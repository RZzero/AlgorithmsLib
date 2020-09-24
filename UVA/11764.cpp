// https://onlinejudge.org/external/117/11764.pdf
#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;

  for(int i = 1; i <= T; i++) {
    int N;
    cin >> N;
    vector<int> walls(N);
    for (auto &w: walls)
      cin >> w;

    int high_jumps = 0;
    int low_jumps = 0;

    for (int i = 1; i < N; i++) {
      if (walls[i] > walls[i-1]) high_jumps++;
      else if (walls[i] < walls[i-1]) low_jumps++;
    }

    cout << "Case " << i << ": " << high_jumps << " " << low_jumps << endl;
  }
  return 0;
}
