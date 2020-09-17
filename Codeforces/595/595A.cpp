#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
  int N,M;
  cin >> N >> M;
  int flats[N][2*M];

  for (int i = 0; i < N; i++){
    for(int j = 0; j < 2*M; j++){
      cin >> flats[i][j];
    }
  }

  int cnt = 0;
  for (int i = 0; i < N; i++){
    for(int j = 2; j <= 2*M; j+=2){
      if(flats[i][j-2] || flats[i][j-1]) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}