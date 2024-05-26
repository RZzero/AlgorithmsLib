#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  set<int> seto;

  int maxi = -1;
  for (int i = 0; i < N; i++) {
    int q;
    cin >> q;
    seto.insert(q);
    maxi = max(maxi, q);
  }

  seto.erase(maxi);
  cout << *(seto.rbegin()) << endl;
  return 0;
}