#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    if (n % K == 0) {
      cout << n / K << " ";
    }
  }
  return 0;
}