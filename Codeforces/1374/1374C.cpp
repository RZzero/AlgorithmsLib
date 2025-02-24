#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  cin >> N;
  stack<char> my_stack;
  string S;
  cin >> S;

  for (auto &s : S) {
    if (!my_stack.size()) {
      my_stack.push(s);
    } else {
      if (my_stack.top() == '(' && s == ')') {
        my_stack.pop();
      } else {
        my_stack.push(s);
      }
    }
  }

  if (my_stack.size()) {
    cout << (int)my_stack.size() / 2 << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  int T;
  cin >> T;
  // T = 1;
  while (T--) {
    solve();
  }
}