// https://codeforces.com/problemset/problem/1077/B
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

  vector<int> original;
  vector<int> disturbed;
  for (int i = 0; i < T; i++) {
    int dum; cin >> dum;
    original.push_back(dum);
  }

  for (int i = 1; i < T-1; i++) {
    if (original[i] == 0 && original[i-1] && original[i+1]) {
      disturbed.push_back(i);
    }
  }

  int answer = 0;
  int i = 0;
  while(i < disturbed.size()) {
    if (disturbed.size() == 1){ answer++; i++; break;}
    if (i + 1 < disturbed.size()) {
      if (disturbed[i+1]-disturbed[i] == 2) {
        i +=2;
        answer++;
      } else {
        answer++;
        i++;
      }
    } else {
      answer++;
      i++;
    }
  }
  cout << answer << endl;
  return 0;
}
