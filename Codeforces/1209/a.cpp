#include <bits/stdc++.h>

using namespace std;

int ARR[1004] = { 0 };
int main (){
  int N;
  string s;
  cin >> N >> s;

  for(int i = 0; i < N; i++){
    int a,b; cin >> a >> b;
    bool state = s[i] == '1';
    int cnt = 0;
    for(int j = b; j <= 1000; j++){
      ARR[j] += state;
      cnt++;
      if (cnt == a) {
        state = !state;
        cnt = 0;
      }
    }
  }

  int fromStart = 0;
  for(int i = 0; i < s.size(); i++) fromStart+= s[i] == '1';
  int maxi = 0;
  for(int i = 1; i <= 1000; i++) maxi = max(maxi, ARR[i]);
  int elMax = max(maxi, fromStart);
  cout << elMax << endl;
  return 0;
}
