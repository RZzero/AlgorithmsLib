#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int x,y;
  int anw = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> x >> y;
    anw = max(anw, x+y);
  }
  cout << anw << endl;
  return 0;
}