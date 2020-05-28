// https://codeforces.com/problemset/problem/1015/B

#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;

int findNext(char c, int l, string& T) {
  for (int i = l; i < T.size(); i++) {
    if (T[i] == c) return i;
  }
  return -1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int N;
  string _S, _T, S, T;

  cin >> N;
  cin >> _S >> _T;
  S = _T, T = _S;

  sort(_S.begin(), _S.end());
  sort(_T.begin(), _T.end());

  if (_S != _T) {
    cout << - 1 << endl;
    return 0;
  }
  
  vector<int> swaps;
  for (int i = 0; i < S.size(); i++) {
    if (T[i] == S[i]) continue;
    else {
      int next_pos = findNext(S[i], i, T);
      for (int k = next_pos; k > i; k--) {
        swap(T[k], T[k-1]);
        swaps.push_back(k);
      }
    }
  }

  cout << swaps.size() << endl;
  for (auto x: swaps) {
    cout << x << " ";
  }
  return 0;
}
