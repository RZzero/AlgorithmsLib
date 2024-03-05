#include <bits/stdc++.h>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << numbers[(A + B + 2) % 10] << endl;
  return 0;
}