#include <bits/stdc++.h>

using namespace std;

int main(){
  // ios_base::sync_with_stdio(false);cin.tie(0);
  int N;
  cin >> N;
  vector<int> people(N);
  for(auto &v: people) cin >> v;
  int total = 0;
  int alice = 0;
  vector<int> winners;
  for(int i = 0; i < people.size(); i++){
    if (i ==0 || people[i] * 2 <= people[0]) {
      alice+= people[i];
      winners.push_back(i+1);
    }
    total+= people[i];
  }
  int middle = total%2 == 0 ? (total / 2) + 1 : (total / 2) + 2;
  if (alice > middle) {
    cout << winners.size() << endl;
    for(auto &v: winners) cout << v << " ";
  } else {
    cout << 0 << endl;
  }
  return 0;
}
