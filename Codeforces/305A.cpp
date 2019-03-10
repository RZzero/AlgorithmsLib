#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  //  co for(int i = 0; i < N; i++){
  // ut << dum 
  // }
  while(N > 0){
    int current = N%10;
    cout << current << endl;
    N /= 10;
  }
  // vector<vector<int>> Places;
  // for(int i = 0; i < N; i++){
  //   Places[]
  // }
  return 0;
}