#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, int> names;
  vector<pair<string,string>> participants(N);
  for (auto &p: participants) {
    cin >> p.first >> p.second;
    names[p.first]++;
    names[p.second]++;
  }
  bool is_valid = true;

  for (auto &p: participants) {
    if (names[p.first] > 1 && names[p.second] > 1) {
      is_valid = false;
      break;
    }
  }
  cout << (is_valid ? "Yes" : "No") << endl;
  return 0;
}