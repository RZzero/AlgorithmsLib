#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    if (N < 3) cout << 0 << endl;
    else {
      cout << (N-1)/2 << endl;
    }
  }
  return 0;
}
