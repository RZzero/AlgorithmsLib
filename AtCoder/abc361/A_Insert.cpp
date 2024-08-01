#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  deque<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  for (int i = 1; i <= numbers.size(); i++) {
    if (i == K) {
      cout << numbers[i - 1] << " " << X << " ";
    } else {
      cout << numbers[i - 1] << " ";
    }
  }

  if (K == numbers.size() + 1) {
    cout << X << " ";
  }
  return 0;
}