#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  set<int> A_SET;
  vector<int> B(M);
  vector<int> C;
  for (auto &a : A) {
    cin >> a;
    A_SET.insert(a);
    C.push_back(a);
  }

  for (auto &b : B) {
    cin >> b;
    C.push_back(b);
  }

  sort(C.begin(), C.end());

  bool can = false;

  for (int i = 1; i < C.size(); i++) {
    if (A_SET.count(C[i - 1]) && A_SET.count(C[i])) {
      can = true;
      break;
    }
  }

  cout << (can ? "Yes" : "No") << endl;
  return 0;
}