#include<bits/stdc++.h>
using namespace std;
using Long = long long;

Long C, T;
bool check(Long F){
  if(F*1.0 >= (C*1.0/T - ((T-1)/2.0))) return true;
  return false;
}

Long binary_search_simple(Long lo, Long hi) {
   Long res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      Long mid = lo + (hi - lo) / 2;
      if (check(mid)) {
         hi = mid - 1;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
         lo = mid + 1;
      }
   }
   return res;
}

int main(){
  int N;
  cin >>  N;
  for(int i = 0; i < N; i++){
    cin >> C >> T;
    cout << binary_search_simple(1, 1e18) << endl;
  }
  return 0;
}

/*
5
15 4
55 10
100 2
25 20
999 1
*/