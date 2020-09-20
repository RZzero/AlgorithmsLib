// https://onlinejudge.org/external/122/12279.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int N;
  int case_number = 1;
  while (cin >> N) {
    if (!N) break;
    int treats = 0;
    int reason = 0;
    for (int i = 0; i < N; i++) {
      int dum; cin >> dum;
      if (dum) reason++;
      else treats++;
    }
    cout << "Case " << case_number << ": " << reason-treats << endl;
    case_number++;
  }
  return 0;
}
