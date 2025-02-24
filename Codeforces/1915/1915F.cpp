#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using Long = long long;
template <typename K>
using ordered_set = tree<K, null_type, less<K>,
                         rb_tree_tag,
                         tree_order_statistics_node_update>;

template <typename K, typename V>
using ordered_map = tree<K, V, less<K>,
                         rb_tree_tag,
                         tree_order_statistics_node_update>;
struct Segment {
  Long a, b;
};

bool comparator(Segment &first, Segment &second) {
  return first.b < second.b;
}

void solve() {
  int N;
  cin >> N;
  vector<Segment> segments;

  for (int i = 0; i < N; i++) {
    Long a, b;
    cin >> a >> b;
    segments.push_back({a, b});
  }

  sort(segments.begin(), segments.end(), comparator);

  ordered_set<int> seen_b;
  Long answer = 0;
  // For every ai so far, count how many bi >= there is.
  // for (auto &[a, b] : segments) {
  //   cerr << a << " " << b << endl;
  // }
  // cerr << endl;

  // vector<int> force_test;
  for (auto &[a, b] : segments) {
    // sort(force_test.begin(), force_test.end());
    // auto it = lower_bound(force_test.begin(), force_test.end(), a);

    // if (force_test.size()) {
    //   cerr << "current state " << endl;
    //   for (auto &el : force_test) {
    //     cerr << el << " ";
    //   }
    //   cerr << endl;
    //   cerr << endl;
    // }

    // if (it != force_test.end()) {
    //   answer += force_test.size() - (it - force_test.begin());
    // }
    // force_test.push_back(a);
    answer += seen_b.size() ? seen_b.size() - seen_b.order_of_key(a) : 0;
    seen_b.insert(a);
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}