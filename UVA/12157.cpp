// https://onlinejudge.org/external/121/12157.pdf
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

int main () {
  
  int T;
  cin >> T;

  for(int i = 1; i <= T; i++) {
    int N;
    cin >> N;
    Long mile = 0;
    Long juice = 0;
    for (int i = 0; i < N; i++) {
      int call; cin >> call;
      call++;
      bool sobra_mile = call % 30;
      mile += sobra_mile ? 10 : 0;
      mile += (call / 30) * 10;

      bool sobra_juice = call % 60;
      juice += sobra_juice ? 15 : 0;
      juice += (call / 60) * 15;
    }

    if (juice == mile) {
      cout << "Case " << i << ": " << "Mile Juice " << juice << endl;
    } else if (juice < mile) {
      cout << "Case " << i << ": " << "Juice " << juice << endl;
    } else {
      cout << "Case " << i << ": " << "Mile " << mile << endl;
    }
  }
  return 0;
}
