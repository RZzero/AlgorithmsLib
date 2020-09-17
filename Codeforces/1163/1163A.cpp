#include <bits/stdc++.h>
#define endl '\n';

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
  int N, M;
  cin >> N >> M;
  map<int,int> mapa;
  mapa[0] = 1;
  bool repeat = N % 2 != 0;
  for(int i = 1; i <= N / 2; i++){
    mapa[i] = i; 
  }
  int cnt = 0;
  for(int i = N; i >= N /2; i--){
    if(repeat && i == N/2+1){ 
      mapa[N/2+1] = N/2;
      break;
    }
    mapa[i] = cnt;
    cnt++;
  }
  mapa[N] = 0;
  cout << mapa[M] << endl;
  return 0;
}