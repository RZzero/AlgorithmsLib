#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<string> my_strings(N);
    set<string> originals;
    for (auto &ms : my_strings) {
      cin >> ms;
      originals.insert(ms);
    }

    vector<int> answer;
    for (auto &ms : my_strings) {
      string a = "";
      bool can = false;
      for (int i = 0; i < ms.size(); i++) {
        a += ms[i];
        string b = ms.substr(i + 1);

        can |= originals.count(a) && originals.count(b);
      }
      answer.push_back(can);
    }

    for (auto &b : answer) {
      cout << b;
    }
    cout << endl;
  }
  return 0;
}