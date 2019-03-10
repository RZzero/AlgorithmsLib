#include <bits/stdc++.h>
using namespace std;

int main(){
  int V1,V2,V3,VM;
  cin >> V1 >> V2 >> V3 >> VM;

  for(int i = 200; i >= 1; i--){
    for(int j = 200; j >= 1; j--){
      for(int k = 200; k >= 1; k--){
        if ( V1 <= i && 2 * V1 >= i
          && V2 <= j && 2 * V2 >= j
          && V3 <= k && 2 * V3 >= k
          && VM <= i && VM <= j && VM <= k
          && VM * 2 < i && VM * 2 < j
          && VM * 2 >= k) {
            cout << i << endl;
            cout << j << endl;
            cout << k << endl;
            return 0;
        }
      }
    }
  }

  cout << -1 << endl;
  return 0;
}