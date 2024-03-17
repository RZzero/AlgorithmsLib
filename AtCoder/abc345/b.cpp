#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N;
  cin >> N;

  Long res = N % 10;

  if (N >= 0) {
    cout << N / 10 + (res > 0) << endl;
  } else {
    cout << N / 10 << endl;
  }

  return 0;
}