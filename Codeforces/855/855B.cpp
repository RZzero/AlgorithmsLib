#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> drops;
  vector<long long> potions;

  for(long long i = 0; i < 3; i++){
    long long dum; cin >> dum;
    potions.push_back(dum);
  }

  for(long long i = 0; i < N; i++) {
    long long dum; cin >> dum;
    drops.push_back(dum);
  }

  long long sum = 0;
  for(long long i = 0; i < potions.size(); i++){
    long long anw = -1e9 * 2;
    for(long long j = 0; j < drops.size(); j++){
      if (potions[i] * drops[j] * 1LL >= anw){
        anw = potions[i] * drops[j] * 1LL;
      }
    }
    sum+= anw;
  }

  cout << sum << endl;
  return 0;
}