#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  cin >> N;

  int original = ceil((1.0 * N) / 1.08);
  int taxed = floor(original * 1.08);
  if (taxed == N) {
    cout << original << endl;
  } else {
    cout << ":(" << endl;
  }
  return 0;
}