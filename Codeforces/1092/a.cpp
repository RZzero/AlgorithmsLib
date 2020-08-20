// https://codeforces.com/contest/1092/problem/A
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

string alphabet = "abcdefghijklmnopqrstuvwxyz";
int main(){
  int T;
  cin >> T;
  while(T--) {
    int n,k;
    cin >> n >> k;
    string answer = "";

    for (int i = 0; i < n; i++) {
      answer+= alphabet[i%k];
    }
  
    cout << answer << endl;
  }
  
  return 0;
}
