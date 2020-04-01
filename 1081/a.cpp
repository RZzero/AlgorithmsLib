#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  if(N == 1){
    cout << 1 << endl;
  }else if(N == 2){
    cout << 2 << endl;
  }else {
    cout << N - (N-1) << endl;
  }
  return 0;
}