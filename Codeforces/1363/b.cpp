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

string checkForType(string &S, char type) {
  string T = S;

  vector<int> PSones(S.size() + 1, 0);
  vector<int> SSones(S.size() + 1, 0);

  for (int i = 0; i < S.size(); i++) {
    PSones[i+1] = ((int)S[i]!= type) + PSones[i];
  }

  for (int i = S.size()-1; i >= 0; i--) {
    SSones[i] = ((int)S[i] != type) + SSones[i+1];
  }

  int answer = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == type && PSones[i] && SSones[i+1]) {
      if (type == '1') T[i] = '0';
      else if (type == '0') T[i] = '1';
    }
  }

  return T;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int T;
  cin >> T;

  while(T--){
    string S;
    cin >> S;

    if (S.size() <= 2) {
      cout << 0 << endl;
      continue;
    }

    string T1 = checkForType(S, '1');
    T1 = checkForType(T1, '0');

    string T2 = checkForType(S, '0');
    T2 = checkForType(T2, '1');
    int anw1 = 0, anw2 = 0;
    for (int i = 0; i < T1.size(); i++) {
      if (S[i] != T1[i]) anw1++;
      if (S[i] != T2[i]) anw2++;
    }
    cout << min(anw1, anw2) << endl;

  }
  return 0;
}
