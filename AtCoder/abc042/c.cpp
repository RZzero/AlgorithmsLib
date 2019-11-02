#include <bits/stdc++.h>
using namespace std;
vector<int> dislikes(10, 0);

bool isValidNumber(int N) {
  while (N > 0) {
    int d = N%10;
    if (dislikes[d])
      return false;
    N /= 10;
  }
  return true;
}
int main (){
  int N, K;
  cin >> N >> K;
  for(int i = 0; i < K; i++){
    int k; cin >> k;
    dislikes[k] = true;
  }
  int mini = N;

  while (!isValidNumber(mini)) {
    ++mini;
  }
  cout << mini << endl;
  return 0;
}

/*
  N * D * 10
 */