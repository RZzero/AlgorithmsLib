#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B, C, anw = 0;
  cin >> N >> A >> B >> C;
  
  if (N == 1) {
    cout << 0 << endl;
    return 0;
  }

  if (C < A && A <= B ) {
    anw = A + ((N - 1) * C) - C;
  }else if(C < B && B <= A){
    anw = B + ((N - 1) * C) - C;
  }

  cout << (anw == 0 ? min(A * (N - 1), B * (N - 1)) : min(anw, min(A * (N - 1), B * (N - 1) ))) << endl;
  return 0;
}


// 9
// 9
// 7
// 5

