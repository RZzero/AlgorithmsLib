#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  vector<int> persons(3, 0);
  persons[A - 1] = 1;
  persons[B - 1] = 1;

  int cnt = 0;
  int idx = -1;

  for (int i = 0; i < persons.size(); i++) {
    if (persons[i]) {
      cnt++;
    } else {
      idx = i;
    }
  }
  if (cnt == 2) {
    cout << idx + 1 << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}