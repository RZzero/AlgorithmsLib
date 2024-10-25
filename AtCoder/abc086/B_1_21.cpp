#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;

  cin >> a >> b;

  int together = stoi(a + b);

  bool is_square = ceil(sqrt(together)) == floor(sqrt(together));

  cout << (is_square ? "Yes" : "No") << endl;
  return 0;
}