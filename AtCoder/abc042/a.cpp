#include <bits/stdc++.h>
using namespace std;

int main(){
  int cnt5, cnt7;
  cnt5 = cnt7 = 0;
  for (int i = 0; i < 3; i++) {
    int haiku; cin >> haiku;
    if (haiku == 5) cnt5++;
    if (haiku == 7) cnt7++;
  }
  if (cnt5 == 2 && cnt7 == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
