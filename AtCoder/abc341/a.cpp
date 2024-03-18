#include <bits/stdc++.h>
using namespace std;

int main() {

  bool get_zero = false;
  int N;
  int one_count = 0;
  cin >> N;
  while (one_count <= N) {
    cout << (get_zero ? 0 : 1);
    if (!get_zero)
      one_count++;
    get_zero = !get_zero;
  }
  return 0;
}