#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  bool ok = false;
  for(int i = 0; i < N; i++){
    int dum;
    cin >> dum;
    if(dum) ok = true;
  }

  if(ok){
    cout << "HARD" << endl;
  }else {
    cout << "EASY" << endl;
  }
  return 0;
}