#include <bits/stdc++.h>
using namespace std;

void print(int x, int y) {
  cout << x << " " << y << " " << endl;
}

int main(){
  int ARR[101] = { 0 };
  int N;
  cin >> N;
  vector<pair<int,int>> Answer;
  for (int i = 0; i < N; i++){
    int dum; cin >> dum;
    ARR[dum]++;
  }

  for (int i = 0; i <= 10; i++) {
    for(int j = 1; j < 100; j++){
      if ((j % 10 == 0 && i*10 != 100) || (j > 10 && j < 100 && i*10 != 100)) continue;

      if (ARR[i*10] > 0 && ARR[j] > 0) {
        int qtty = min(ARR[i*10], ARR[j]);
        for(int k = 0; k < qtty; k++){
          Answer.push_back({i*10,j});

          ARR[i*10]--;
          ARR[j]--;
        }
      }
    }
  }

  cout << Answer.size() * 2 << endl;
  for(auto p: Answer) print(p.first,p.second);
  return 0;
}