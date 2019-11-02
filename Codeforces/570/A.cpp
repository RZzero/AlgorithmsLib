#include <bits/stdc++.h>
  
using namespace std;

bool divisibleBy4(int n) {
  int sum = 0;
  while(n > 0){
    sum += n%10;
    n/=10;
  }
  if (sum %4 == 0) return true;
  return false;
}
int main() {
  int a;
  cin >> a;

  for(int i = a; ; i++){
    bool current = divisibleBy4(i);
    if (current) {
      cout << i << endl;
      return 0 ;
    }
  }
  return 0;
}