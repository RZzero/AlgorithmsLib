#include <bits/stdc++.h>
using namespace std;
using Long = unsigned long long;

bool isPrimitiveRoot(int X, int P){
  bool can = false;
  if((Long)(pow(X, P-1) - 1) % P == 0) can = true; 
  for(Long i = 1; i <= P-2; i++){
    if((Long)(pow(X,i) - 1) % P == 0) can = false;
  }
  return can;
}
int main(){
  int P;
  cin >> P;

  int cnt = 0;
  for(int i = 1; i < P; i++){
    if(isPrimitiveRoot(i,P)) cnt++;
  }
  cout << cnt << endl;
  return 0;
}