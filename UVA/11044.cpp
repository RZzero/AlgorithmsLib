// https://onlinejudge.org/external/110/11044.pdf
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N,M;
    cin >> N >> M;
    int vertical = ceil(((N-2) * 1.0) / 3);
    int horizontal = ceil(((M-2) * 1.0) / 3);

    cout << vertical * horizontal << endl;
  }
  return 0;
}
