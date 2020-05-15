#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;

string abecedario = "abcdefghijklnmopqrstuvwxyz";
int main(){
  int T;
  cin >> T;
  while (T--) {
    int n, a, b;
    cin >> n >> a >> b;
    string s = "";

    for (int i = 0; i < n; i++) {
      s+= abecedario[i%b];
    }
    cout << s << endl;
  }
  return 0;
}
