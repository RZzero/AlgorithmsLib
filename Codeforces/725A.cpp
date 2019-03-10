#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string s;
  cin >> N >> s;
  
  int anw = 0;
  int cnt = 0;
  if (s[N-1] == '>') {
    for(int i = N-1; i >= 0 && s[i] == '>'; i--)
      cnt++;
    anw+= cnt;
  }

  cnt = 0;
  if (s[0] == '<') {
    for(int i = 0; i < N && s[i] == '<'; i++)
      cnt++;
    anw+= cnt;
  }

  cout << anw << endl;
}