#include <bits/stdc++.h>
using namespace std;

int int_val(char x) {
  return (int)(x - '0');
}
int main() {
  int N;
  cin >> N;

  vector<int> likes;

  for (int i = 100; i <= 919; i++) {
    string currento = to_string(i);
    // cerr << int_val(currento[0]) * int_val(currento[1]) << endl;
    if (int_val(currento[0]) * int_val(currento[1]) == int_val(currento[2])) {
      likes.push_back(i);
      // cerr << currento << endl;
    }
  }

  auto it = lower_bound(likes.begin(), likes.end(), N);
  cout << *it << endl;
  return 0;
}