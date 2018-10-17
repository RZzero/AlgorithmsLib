#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  

  cin >> a >> b >> c;
  vector<int> V = {a, b, c};
  sort(V.rbegin(), V.rend());
  int sides = V[0] + V[1];
  return 0;
}