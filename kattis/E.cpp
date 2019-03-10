#include <bits/stdc++.h>
using namespace std;

vector<int> numbers;
int N;
int DP(int index, bool last_taken){
  if (index >= N) return 0;
  return 0;
}

int main(){
  cin >> N;
  for(int i = 0; i < N; i++){
    int nn; cin >> nn;
    numbers.push_back(nn);
  }

  cout << DP(0,0) << endl;
  return 0;
}