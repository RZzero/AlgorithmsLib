#include <bits/stdc++.h>

using namespace std;

int main(){
  int y,b,r;
  cin >> y >> b >> r;

  int maxi = -1;
  for(int i = 1; i <= y; i++){
    for(int j = 2; j <= b; j++){
      for(int k = 3; k <= r; k++){
        if(j == i+1 && k == j+1){
          maxi = max(maxi, i + j + k);
        }
      }
    }
  }
  cout << maxi << endl;
  return 0;
}