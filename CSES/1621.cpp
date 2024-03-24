#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  set<int> seto;
  for (int i = 0; i < N; i++) {
    int cur;
    cin >> cur;
    seto.insert(cur);
  }
  cout << seto.size() << endl;
  return 0;
}