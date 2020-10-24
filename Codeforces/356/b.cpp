// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N, livesIn;

  cin >> N >> livesIn;
  vector<int> cities(N);
  for (auto &c: cities) cin >> c;
  
  int criminals = 0;
  livesIn--;
  for (int i = 0; i < N; i++) {
    // city where Limak lives
    if (i == 0) {
      if (cities[livesIn]) criminals++;
      continue;
    }

    int leftRange =   livesIn - i > -1 ? (livesIn - i) : -1;
    int rightRange =  livesIn + i < N ? (livesIn + i) : -1;

    // if one not in range and a 1
    if (leftRange == -1 || rightRange == -1) {
      if (leftRange == rightRange) continue;
      if (leftRange == -1 && cities[rightRange]) criminals++;
      else if (rightRange == -1 && cities[leftRange]) criminals++;
    } else if (cities[leftRange] && cities[rightRange]) {
      criminals+= 2;
    }
  }

  cout << criminals << endl;
  return 0;
}