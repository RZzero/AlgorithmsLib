#include<bits/stdc++.h>
using namespace std;

int main(){
  float R, S;
  int N;
  cin >> R >> S;
  cin >> N;

  float anw = 0;
  for(int i = 0; i < N; i++){
    float F;
    cin >> F;
    float diff = ((1.0*(R-F))*1.0) / (S*1.0);
    anw+=diff;
  }
  anw+= 2*N;
  // cout << setprecision(6);
  cout << anw << endl;
  return 0;
}