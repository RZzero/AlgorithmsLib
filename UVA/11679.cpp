// https://onlinejudge.org/external/116/11679.pdf

#include <bits/stdc++.h>

using namespace std;

int main() {
  int B, D;
  while (cin >> B >> D) {
    if (B ==0 && D == 0) break;
    vector<int> balance(B + 1);
    
    for (int i = 1; i <= B; i++) {
      cin >> balance[i];
    }

    for (int i = 0; i < D; i++) {
      int a,b,c;
      cin >> a >> b >> c;
      balance[a] -= c;
      balance[b] += c;
    }

    bool intercede = false;

    for (int i = 1; i <= B; i++) {
      if (balance[i] < 0)
        intercede = true;
    }

    if (intercede) {
      cout << "N" << endl;
    } else {
      cout << "S" << endl;
    }
  }
  return 0;
}
