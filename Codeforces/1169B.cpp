#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &l,const pair<int,int> &r) {
  return l.first < r.first;
}

int main(){
  int up, N;
  cin >> up >> N;
  vector<int> freq (N+1);
  map<pair<int,int>, int> appear; // What numbers appears in each position
  for(int i = 0; i < N; i++){
    int x,y;
    cin >> x >> y;
    freq[x]++;
    freq[y]++;
    appear[{x,y}]++;
  }

  vector<pair<int,int>> pairs;
  for(int i = 1; i <= N; i++){
    if (!freq[i]) continue;
    pairs.push_back({freq[i], i});
  }

  sort(pairs.begin(), pairs.end());

  bool can = false;
  for(int i = 0; i < pairs.size(); i++){
    if (freq[pairs[i].second] == N) {
      can = true;
      break;
    }
    int la_pos = lower_bound(pairs.begin() + i, pairs.end(), pair<int,int> (N-pairs[i].first, 0), cmp)-pairs.begin();
    for(int j = la_pos; j < pairs.size(); j++){
      if (i == j) continue;
      if (pairs[i].first + pairs[j].first >= N) {
        int mini, maxi;
        if (pairs[i].second < pairs[j].second) {
          mini = pairs[i].second;
          maxi = pairs[j].second;
        } else {
          mini = pairs[j].second;
          maxi = pairs[i].second;
        }

        if (pairs[i].first + pairs[j].first - appear[{mini, maxi}] == N) {
          can = true;
          break;
        }
      }
    }
    if (can) break;
  }
  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
