#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> V (N);
  for(auto &l: V) cin >> l;

  double sum = 0.0;
  for(auto &l: V) sum+= 1.0 * (1.0/l*1.0);
  cout << fixed << setprecision(9) << 1/sum << endl;
  return 0;
}
