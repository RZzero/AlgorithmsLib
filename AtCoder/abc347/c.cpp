#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, A, B;
  cin >> N >> A >> B;
  bool can = true;

  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    if (n % (A + B) > A) {
      can = false;
    }
  }
  cout << (can ? "Yes" : "No") << endl;
  return 0;
}