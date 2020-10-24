// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  while (T--) {
    int N, a, b;
    cin >> N >> a >> b;
    
    int maxi = -1;
    int dum;
    for (int i = 0; i < a; i++){
      cin >> dum;
      maxi = max(maxi, dum);
    }
    for (int i = 0; i < b; i++){
      cin >> dum;
    }
  
    if (maxi == N) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}