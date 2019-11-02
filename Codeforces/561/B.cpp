#include <bits/stdc++.h>
#define endl '\n';

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;
vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
int main(){
  int K;
  cin >> K;

  int N,M;
  bool possible = false;
  for(long long i = 5; i <= K; i++){
    for(long long j = 5; j <= K; j++){
      if(i * j == K){
        N = i;
        M = j;
        possible = true;
        break;
      }
    }
    if(possible) break;
  }
  if (!possible){
    cout << -1 << endl;
  }else {
    int max_dim = max(N,M);
    char table[max_dim*2][max_dim*2];
    for(int i = 0; i < max_dim*2; i++){
      int cur_i = i;
      for(int j = 0; j < max_dim*2; j++){
        // cout << cur_i << " " << j << endl;
        table[cur_i][j] = vowels[i%5];
        cur_i--;
      }
    }
    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        cout << table[i][j];
      }
    }
  }
  return 0;
}