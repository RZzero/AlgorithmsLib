#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  for(int i = 0; i< N; i++){
    int a,b; cin >> a >> b;
    if(a %2 == 0 || b %2 == 0) {
      cout << 2 << endl;
    } else {
      cout << 12 << endl;
    }
  }
  return 0;
}
