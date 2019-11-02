#include <bits/stdc++.h>
#define endl '\n';

using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> people(N);
  for(auto &p: people) cin >> p;

  int alive = 0;
  int currentLength = 0;
  for(int i = N-1; i >= 0; i--){
    if (currentLength == 0) {
      alive++;
    }
    currentLength = max(currentLength-1, people[i]);
  }
  cout << alive << endl;
  return 0;
}