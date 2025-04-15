#include <bits/stdc++.h>
using namespace std;

bool comparator(string &a, string &b) {
  return a.size() < b.size();
}

int main() {
  string S;
  cin >> S;

  stack<char> myst;

  for (int i = 0; i < S.size(); i++) {
    if (!myst.size()) {
      myst.push(S[i]);
      continue;
    }

    bool can_pop = myst.top() == '(' && S[i] == ')' || myst.top() == '[' && S[i] == ']' || myst.top() == '<' && S[i] == '>';
    if (can_pop) {
      myst.pop();
    } else {
      myst.push(S[i]);
    }
  }

  cout << (!myst.size() ? "Yes" : "No") << endl;
  return 0;
}