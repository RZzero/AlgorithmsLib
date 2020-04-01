// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N, M;
  cin >> N >> M;
  vector<int> candies(N);

  for(auto &c: candies) cin >> c;

  sort(candies.begin(), candies.end());
  vector<int> PS(N+2);

  for (int i = N-1; i >= 0; i--){
    PS[i] = PS[i+1] + candies[i];
  }

  for (int k = 0; k < N; k++) {
    int multiplier = 1;
    int actualSum = 0;
    for (int i = k; i >= 0; i-= M) {
      actualSum += multiplier * (PS[i]-PS[i-1]);
      multiplier++;
    }
    cout << actualSum << " ";
  }
  cout << endl;

  return 0;
}