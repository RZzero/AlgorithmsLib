// https://codeforces.com/problemset/problem/1015/C
#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;
using Long = long long;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  Long P, bytes;
  cin >> P >> bytes;

  vector<pair<Long,Long>> pairs;
  Long total = 0;
  for(Long i = 0; i < P; i++) {
    Long x,y;
    cin >> x >> y;
    pairs.push_back({ x, y });
    total+= x;
  }

	sort(pairs.begin(), pairs.end(),[&](pair<Long, Long> a, pair<Long, Long> b) {
    return a.first - a.second > b.first - b.second;
  });

  Long compressed = 0;
  for (Long i = 0; i < pairs.size(); i++) {
    if (total <= bytes) break;
    else {
      total = total - pairs[i].first + pairs[i].second;
      compressed++;
    }
  }

  if (total > bytes) cout << -1 << endl;
  else cout << compressed << endl;
  return 0;
}
