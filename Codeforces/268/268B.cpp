#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;

  Long anw = 0;
  for(int i = 0; i < N; i++){
    anw += (i * N - i);
  }

  cout << anw << endl;
  return 0;
}

