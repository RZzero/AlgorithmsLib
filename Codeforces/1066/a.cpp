// https://codeforces.com/problemset/problem/1363/B
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
    int L, v, l, r;
    cin >> L >> v >> l >> r;

    int initial = L/v;
    int second = 0;

    int answer = initial - r/v + (l%v == 0 ? (l/v) - 1 : l/v);

    cout << answer << endl;
  }
  return 0;
}
