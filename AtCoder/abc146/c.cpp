// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

Long A, B, X;
int digitsOfN(Long N){
  int qtt = 0;
  while (N > 0) {
    N = N / 10;
    qtt++;
  }
  return qtt;
}

bool check(Long N){
  // cout << "((A * N) + (B * digitsOfN(N))) " << ((A * N) + (B * digitsOfN(N))) << endl;
  if(((A * N) + (B * digitsOfN(N))) <= X) return true;
  return false;
}

Long binary_search_simple(Long lo, Long hi) {
   Long res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      Long mid = lo + (hi - lo) / 2;
      // cout << mid << endl;
      if (!check(mid)) {
         hi = mid - 1;
      } else {
         res = mid;     // if searching for last NO, move this line to else case  
         lo = mid + 1;
      }
   }
   return res;
}

int main (){
  cin >> A >> B >> X;
  if (A > X) {
    cout << 0 << endl;
  } else {
    cout << binary_search_simple(0, 1e9) << endl;
  }
  return 0;
}