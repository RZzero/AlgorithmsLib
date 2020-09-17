#include <bits/stdc++.h>

using namespace std;

int main(){
  int  N;
  cin >> N;
  string mine, friends;
  cin >> mine >> friends;
  int cnt = 0;
  for(int i = 0; i < mine.size(); i++){
    if (mine[i] == friends[i]) cnt++;
  }

  int d = cnt > N ? cnt-N: 0;
  cout << cnt + (mine.size()-cnt-d) << endl;
  return 0;
}

/*
3
FTFFF
TFTTT

TTFTFFTFTF
TTTTFFTTTT

7 iguales - (iguales-N > 0 = iguales-N) + sobran

N - not_equals
6 - 6 + different

N - 
*/