#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  vector<int> PS(N+1);

  for(int i = 1; i <= N; i++){
    PS[i] = PS[i-1] + (int)S[i-1]-'0';
    // cout << << endl;
  }
  for(int i = 0; i <= N; i++){
    cout << PS[i] << " " << PS[N]-PS[i] << endl;
    if(PS[i] == PS[N]-PS[i]){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" <<endl;
  return 0;
}