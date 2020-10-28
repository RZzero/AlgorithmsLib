#include <bits/stdc++.h>

using namespace std;

int main() {
  string S = "()";
  deque<char> my_stack;

  for (auto &c: S) {
    if (my_stack.size() &&
      (
           (my_stack.back() == '{' && c == '}')
        || (my_stack.back() == '[' && c == ']')
        || (my_stack.back() == '(' && c == ')')
      )
    ) {
      my_stack.pop_back();
    } else {
      my_stack.push_back(c);
    }
  }
  cout << my_stack.empty() << endl;
  return 0;
}