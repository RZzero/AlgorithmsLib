#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--) {
    int N, M; cin >> N >> M;
    int matches = 0;

    vector<map<int,int>> V(N);

    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++) {
        int number; cin >> number;
        V[i][number]++;
      }
    }

    for(int i = 1; i < V.size(); i++) {
      for(auto &l: V[i]) {

        if (V[i-1].count(l.first) > 0) {
          matches+= min(V[i-1][l.first], V[i][l.first]);
        }

      }
    }
    cout << matches << endl;
  }
  return 0;
}
/**
 * 

1
2 3
1 2 3
4 1 2
 */