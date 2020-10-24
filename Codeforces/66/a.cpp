// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;
  vector<int> V(N);

  for (auto &v: V) cin >> v;

  int maxi = -1;
  for(int i = 0; i < N; i++) {
    int toTheLeft = 0;
    int last = V[i+1];
    for(int j = i+1; j < N; j++){
      if (V[j] <= last && V[i] >= last) {
        last = V[j];
        toTheLeft++;
      } else break;
    }

    int toTheRight = 0;
    last = V[i-1];
    for(int j = i-1; j >= 0; j--){
      if (V[j] <= last && V[i] >= last) {
        last = V[j];
        toTheRight++;
      } else break;
    }
    maxi = max(maxi, toTheLeft + toTheRight + 1);
  }

  cout << maxi << endl;
  return 0;
}