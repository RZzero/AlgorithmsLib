// https://codeforces.com/problemset/problem/1397/A
#include <iostream>
#include <vector>

using namespace std;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> times(26);
    vector<string> strings;
    int sumOfSizes = 0;

    for (int i = 0; i < N; i++) {
      string s;
      cin >> s;
      strings.push_back(s);
      sumOfSizes+= s.size();
    }

    for (int i = 0; i < strings.size(); i++) {
      for (int j = 0; j < strings[i].size(); j++) {
        times[(int)strings[i][j]-'a']++;
      }
    }

    bool can = true;
    for (int i = 0; i < times.size(); i++) {
      if (times[i] == 0) continue;
      if ((times[i] % N)) {
        can = false;
      }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}

