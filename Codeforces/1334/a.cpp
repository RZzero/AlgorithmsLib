#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int tries;
    cin >> tries;

    int np, nc;
    vector<pair<int,int>> plays;

    for (int i = 0; i < tries; i++) {
      cin >> np >> nc;
      plays.push_back({ np, nc });
    }

    bool can = true;
    int max_dif = 0;

    for (int i = 0; i < plays.size(); i++) {
      int cur_d = plays[i].first - plays[i].second;
      if (cur_d < 0 || cur_d < max_dif) {
        can = false;
        break;
      }
      int max_dif = max(max_dif, cur_d);
    }

    for (int i = 1; i < plays.size(); i++) {
      auto beforePair = plays[i - 1];
      auto currentPair = plays[i];
      if (currentPair.first < beforePair.first
        || currentPair.second < beforePair.second
        || (currentPair.first == beforePair.first && currentPair.second > beforePair.second)) {
        can = false;
        break;
      }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;

  }
  return 0;
}