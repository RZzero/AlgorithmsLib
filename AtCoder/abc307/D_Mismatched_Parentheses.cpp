// https://atcoder.jp/contests/abc307/tasks/abc307_d
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N;
  cin >> S;

  string new_s = "";

  int open_cnt = 0;
  stack<char> st;
  for (int i = 0; i < N; i++) {
    if (S[i] == ')' && open_cnt) {
      while (st.top() != '(') {
        st.pop();
      }
      st.pop();
      open_cnt--;
    } else {
      st.push(S[i]);
      open_cnt += S[i] == '(';
    }
  }
  while (st.size()) {
    new_s += st.top();
    st.pop();
  }

  reverse(new_s.begin(), new_s.end());
  cout << new_s << endl;
  return 0;
}