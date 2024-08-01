#include <bits/stdc++.h>

using namespace std;
int main() {
  int N;
  set<int> numbers;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int q;
    cin >> q;
    numbers.insert(q);
  }
  cout << (numbers.size() == 1 ? "Yes" : "No") << endl;
  return 0;
}