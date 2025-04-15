#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> numbers(14, 0);
  for (int i = 0; i < 7; i++) {
    int n;
    cin >> n;
    numbers[n]++;
  }
  sort(numbers.rbegin(), numbers.rend());

  cout << (numbers[0] >= 3 && numbers[1] >= 2 ? "Yes" : "No") << endl;
  return 0;
}