#include <bits/stdc++.h>

using namespace std;
using Long = long long;


int main() {
  int N; double M;
  cin >> N >> M;
  double answer = 0;
  for (int i = 0; i < N; i++) {
    int c; double l;
    cin >> c >> l;
    answer += (c * l);
  }

  cout << round(answer/M) << endl;
  return 0;
}
