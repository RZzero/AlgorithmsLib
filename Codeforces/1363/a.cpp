// https://codeforces.com/problemset/problem/1363/A
#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;
using Long = long long;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int T;
  cin >> T;

  while(T--){
    int x,n;
    cin >> n >> x;
    vector<int> numbers;
    int odd, even;
    odd = even = 0;
    for (int i = 0; i < n; i++) {
      int dum; cin >> dum;
      if (dum %2 == 0) even++;
      else odd++;
    }

    if (odd == 0){ 
      cout << "NO" << endl;
      continue;
    }

    // Mayor cantidad numeros impares que sea menor que X
    int greatest_odd = 0;
    if (odd >= x) {
      if (x %2 == 0 ) {
        greatest_odd = x-1;
      } else {
        greatest_odd = x;
      }
    } else {
      if (odd % 2 == 0) {
        greatest_odd = odd - 1;
      } else {
        greatest_odd = odd;
      }
    }

    if (greatest_odd + even >= x) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
