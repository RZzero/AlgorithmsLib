#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main() {
  Long N;
  cin >> N;
  vector<Long> digits = { 1, 3, 5, 7, 9 };

  Long sum = 0;
  Long fives = N / 5;
  for (auto d: digits) sum += d;
  sum = sum * fives;
  // If there is anything left;
  Long left = N % 5;
  for (int i = 0; i < left; i++) {
    sum += digits[i];
  }
  cout << sum << '\n';
  return 0;
}