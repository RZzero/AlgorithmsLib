#include<bits/stdc++.h>
using namespace std;

int main (){
  int N, X;
  cin >> N >> X;
  vector<int> L (N);

  for(auto &Li: L) cin >> Li;

  int bounces = 1;
  int currentCoordinate = 0;
  for(int i = 0; currentCoordinate + L[i] <= X && i < L.size(); i++) {
    currentCoordinate += L[i];
    bounces++;
  }

  cout << bounces << endl;
  return 0;
}