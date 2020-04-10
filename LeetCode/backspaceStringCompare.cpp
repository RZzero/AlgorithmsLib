#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

bool slow(string S, string T) {
  string finalS = "";
  string finalT = "";

  for (int i = 0; i < S.size(); i++) {
    if (finalS.size() && S[i] == '#') {
      finalS.pop_back();
    } else if (S[i] != '#'){
      finalS+= S[i];
    }
  }

  for (int i = 0; i < T.size(); i++) {
    if (finalT.size() && T[i] == '#') {
      finalT.pop_back();
    } else if (T[i] != '#') {
      finalT+= T[i];
    }
  }

  return finalS == finalT;
}
int main () {
  string S, T;
  cin >> S >> T;

  cout << slow(S, T) << endl;
  return 0;
} 