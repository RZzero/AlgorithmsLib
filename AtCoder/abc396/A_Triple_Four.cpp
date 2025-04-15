#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool can = false;
  for (int i = 2; i < N; i++) {
    can |= numbers[i - 2] == numbers[i - 1] && numbers[i] == numbers[i - 1];
  }

  cout << (can ? "Yes" : "No") << endl;
  return 0;
}