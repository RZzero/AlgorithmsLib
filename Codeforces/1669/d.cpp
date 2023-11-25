#include <bits/stdc++.h>

using namespace std;
vector<string> get_splitted_strings(string q) {
  vector<string> answer;
  string splitted = "";

  for (auto &s: q) {
    if (s == 'W') {
      if (splitted.size())
        answer.push_back(splitted);
      splitted = "";
    } else {
      splitted += s;
    }
  }

  if (splitted.size())
    answer.push_back(splitted);

  return answer;
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N; string S;
    cin >> N >> S;

    if (N == 1) {
      cout << (S[0] == 'W' ? "YES" : "NO")  << endl;
      continue;
    }

    vector<string> splitted_strings = get_splitted_strings(S);
    bool has_red = false, has_blue = false;
    bool can = true;

    for(auto &splitted_string: splitted_strings) {
      bool has_red = false, has_blue = false;
      for (auto &s: splitted_string) {
        if (s == 'R') has_red = true;
        if (s == 'B') has_blue = true;
      }

      can &= (has_red && has_blue) || (has_red == has_blue && has_blue == false);
    }

    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}