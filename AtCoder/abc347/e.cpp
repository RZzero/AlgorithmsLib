#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int N, Q;
  cin >> N >> Q;
  set<int> used;
  vector<int> queries(Q);

  for (auto &q : queries)
    cin >> q;

  vector<int> PS(Q + 2, 0);
  vector<int> PS_SIZES(Q + 1, 0);
  map<int, vector<int>> my_segment;
  for (int i = 1; i <= Q; i++) {
    int q = queries[i - 1];
    // cout << "the query " << q << endl;
    bool should_delete = used.count(q);
    if (should_delete) {
      my_segment[q].push_back(PS[i - 1] + used.size());
      used.erase(q);
    } else {
      used.insert(q);
      my_segment[q].push_back(-used.size());
    }
    PS[i] = PS[i - 1] + used.size();
    // cout << PS[i] << " " << endl;
  }
  // cout << endl;
  cout << "THE PS " << endl;
  for (auto &ps : PS) {
    cout << ps << " ";
  }
  cout << endl;
  cout << PS[Q] << endl;
  for (auto &[number, segments] : my_segment) {
    if (segments.size() % 2 == 1) {
      segments.push_back(PS[Q]);
    }
    Long sum = 0;
    for (int i = 0; i < segments.size(); i += 2) {
      cout << segments[i] << " " << segments[i + 1] << endl;
      sum += segments[i] + segments[i + 1];
    }
    cout << sum << " ";
    cout << endl;
    cout << endl;
    cout << endl;
  }
  return 0;
}