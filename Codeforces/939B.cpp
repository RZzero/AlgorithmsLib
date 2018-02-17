#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;
bool check(ull N, ull hamsters, ull selected) {
   if (N*selected <= hamsters) {
       return false;
   } 
   else return true;
} 

int binary_search_simple(ull lo, ull hi, ull hamsters ,ull selected) {
   long long res = -1; // remains -1 if no argument is good
   while (lo <= hi) {

      ull mid = lo + (hi - lo) / 2;
    //   cout << mid << endl;
      bool chk = check(mid, hamsters,selected);
      if (chk) {
         hi = mid - 1;
      } else {
         res = mid;     // if searching for last NO, move this line to else case  
         lo = mid + 1;
      }
   }
   return res;
}
int main(){
    ull N, K,selected;
    long long mini = 1e18;
    ull type;
    cin >> N >> K;

    for(int i = 0; i < K; i++){
        int cur; cin >> cur;
        if(N%cur <= mini && cur < selected){
            selected = cur;
            mini = N%cur;
            type = i+1;
        }
    }
    cout << type << " " << binary_search_simple(1,1e18,N,selected)  << endl;
    long long res = -1;
    // cout << res << endl;
    return 0;
}