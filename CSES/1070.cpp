// https://cses.fi/problemset/task/1070
#include <iostream>

using namespace std;

int main () {
  int N;
  cin >> N;

  if (N == 1) {
    cout << 1 << endl;
  } else if (N <= 3) {
    cout << "NO SOLUTION" << endl;
  } else {
    for (int i = 2; i <= N; i+=2) cout << i << " ";
    for (int i = 1; i <= N; i+=2) cout << i << " ";
  }
  return 0;
}
