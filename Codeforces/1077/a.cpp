// https://codeforces.com/problemset/problem/1077/A
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
    Long a,b,k;
    cin >> a >> b >> k;

    Long aTimes, bTimes;
    if (k == 1) {
        aTimes = 1;
        bTimes = 0;
    } if (k % 2 == 0) {
        aTimes = bTimes = k/2;
    } else {
        bTimes = k/2;
        aTimes = k-bTimes;
    }
    Long answer = (aTimes * a) - (bTimes * b);
    cout << answer << endl;
  }
  return 0;
}
