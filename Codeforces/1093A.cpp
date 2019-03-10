#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    int dum;
    cin >> dum;
    if(dum % 2 == 0){
      cout << dum/2 << endl;
    }else if(dum ==3 ){
      cout << 1 << endl;
    }else {
      cout << 1 + ((dum-3) / 2) << endl;
    }
  }
  return 0;
}


// if multiple of 2 cout anw/2
// if not 2 print mult of 2 and one of 3


// 