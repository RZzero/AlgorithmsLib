#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string numbers = S.substr(3);
  int number = stoi(numbers);

  bool can = number && number <= 349 && number != 316;
  cout << (can ? "Yes" : "No") << endl;
  return 0;
}