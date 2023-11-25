#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  auto differ_by_one = [](string a, string b) -> bool {
    bool can = false;
    if (a[0] < a[1]) swap(a[0], a[1]);
    if (b[0] < b[1]) swap(b[0], b[1]);

    if ((a[0] == b[0] && a[1] != b[1])
      || (a[0] != b[0] && a[1] == b[1])
      || (a[0] != b[1] && a[1] == b[0])
      || (a[1] != b[0] && a[0] == b[1])) can = true;
    return can;
  };

  while (T--) {
    // For each pair generate all possible pairs, if exists count. Divide by 2 because of counting
    int N; cin >> N;
    vector<string> og_strings;
    map<string,vector<int>> positions;
    for (int i = 0; i < N; i++) {
      string p; cin >> p;
      og_strings.push_back(p);
      if (!positions.count(p)) {
        positions.insert({ p, { i } });
      } else {
        positions[p].push_back(i);
      }
    }
    
    long long cnt = 0;

    for (int i = 0; i < N; i++) {
      string current = og_strings[i];

      // generate iterating first char
      for (char j = 'a'; j <= 'k'; j++) {
        current[0] = j;
        if (differ_by_one(current, og_strings[i])) {
          // Use lower_bound to only count cases where i < j
          cnt += positions[current].size() ? positions[current].size() : 0;
        }
      }

      current = og_strings[i];
      // generate iterating second char
      for (char j = 'a'; j <= 'k'; j++) {
        current[1] = j;
        if (differ_by_one(current, og_strings[i])) {
          cnt += positions[current].size() ? positions[current].size() : 0;
        }
      }
    }

    cout << cnt/2 << endl;
  }
  return 0;
}
