#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  for (int i = 0; i < N - 1; i++) {
    cout << numbers[i] * numbers[i + 1] << endl;
  }
  return 0;
}