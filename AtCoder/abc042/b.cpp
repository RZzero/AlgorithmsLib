#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<string> S(N);
  for(auto &s: S)
    cin >> s;
  
  sort(S.begin(), S.end());
  for(auto &s: S) cout << s;
  return 0;
}