#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  if( (N-2) % 3 == 0) cout << "1 " << "2 " << N-1 << endl;
  else cout << "1 " << "1 " << N-2 << endl;
  return 0;
}