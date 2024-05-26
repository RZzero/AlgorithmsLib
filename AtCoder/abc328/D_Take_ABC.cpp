#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string st = "";
  for (auto &s : S) {
    st += s;

    if (st.size() >= 3) {
      string last_three = st.substr(st.size() - 3);
      if (last_three == "ABC") {
        st = st.substr(0, st.size() - 3);
      }
    }
  }

  cout << st << endl;

  return 0;
}