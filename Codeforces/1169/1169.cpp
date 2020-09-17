#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,x,b,y;
  cin >> n >> a >> x >> b >> y;

  bool can = false;
  while(a != x && b != y){
    if (a == b) can = true;
    if (a == n) a = 1;
    else a++;
    
    if (b == 1) b = n;
    else b--;
  }

  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
