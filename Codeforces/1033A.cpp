#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int a,b,c;
  vector<int> V(3);
  for(auto &v: V) cin >> v;
  sort(V.begin(), V.end());
  cout << max(0, V[2] - ( V[0] + V[1] - 1)) << endl;
  return 0;
}