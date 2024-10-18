#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<string,string>> participants(N);
  for (auto &p: participants) {
    cin >> p.first >> p.second;
  }

  bool is_valid = true;

  for (int i = 0; i < participants.size(); i++) {
    auto [name, lastname] = participants[i];
    bool ok1 = true;
    bool ok2 = true;
    for (int j = 0; j < participants.size(); j++) {
      if (i == j) continue;
      auto [name2, lastname2] = participants[j];

      ok1 &= name != name2;
      ok2 &= lastname != lastname2;
      ok1 &= name != lastname2;
      ok2 &= lastname != name2;

      is_valid &= (ok1 || ok2);
      if (!is_valid) break;
    }
    if (!is_valid) break;
  }

  cout << (is_valid ? "Yes" : "No") << endl;
  return 0;
}