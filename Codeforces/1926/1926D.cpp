#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  auto has_one = [](string S) -> bool {
    for (auto &s : S) {
      if (s == '1')
        return true;
    }
    return false;
  };

  while (T--) {
    int N;
    cin >> N;
    vector<string> strings(N);

    for (auto &s : strings)
      cin >> s;

    bool square = false;

    for (int i = 0; i < strings.size() - 1; i++) {
      if (!has_one(strings[i]))
        continue;
      if (has_one(strings[i]) && has_one(strings[i + 1]) && strings[i] == strings[i + 1]) {
        square = true;
        break;
      }
    }

    cout << (square ? "SQUARE" : "TRIANGLE") << endl;
  }
  return 0;
}