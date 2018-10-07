#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  vector<int> V;
  cin >> N;
  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    V.push_back(dum);
  }

  int j = 1;
  for(; j < N; j++){
    if(V[j-1] >= V[j]) break;
  }
  for(; j < N; j++){
    if(V[j-1] != V[j]) break;
  }
  for(; j < N; j++){
    if(V[j-1] <= V[j]) break;
  }

  // cout << j << endl;
  if(j == N) cout << "YES" << endl;
  else cout << "NO"<< endl;
}