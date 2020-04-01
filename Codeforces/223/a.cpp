// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;

  vector<int> V(N);
  for(auto &v: V) cin >> v;
  sort(V.rbegin(), V.rend());
  int sereja = 0, dima = 0;
  bool s = true;
  for (int i = 0; i < N; i++) {
    if (s) sereja += V[i];
    else dima+= V[i];
    s = !s;
  }

  cout << sereja << " " << dima << endl;
  
  return 0;
}