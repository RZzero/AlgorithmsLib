#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);

  int N, dum;
  cin >> N;
  map<int,int> numbers;
  vector<int> V;
  for(int i = 0; i < N; i++){
    cin >> dum;
    V.push_back(dum);
    numbers[dum]++;
  }

  int cnt = 0;
  for(int X = 0; X < N; X++) {
    bool can = false;
    for(int i = 0; i < 31; i++){
      int Z = pow(2,i);
      if (numbers.count(Z-V[X])
        && (numbers[Z-V[X]] > 1 || (numbers[Z-V[X]] == 1 && Z-V[X] != V[X]))) {
          can = true;
      }
    }
    if(!can) cnt++;
  }

  cout << cnt << endl;
  return 0;
}

/*
6
4 7 1 5 4 9



*/