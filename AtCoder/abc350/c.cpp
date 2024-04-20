#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers(N + 1);
  vector<int> positions(N + 1);
  vector<pair<int, int>> operations;

  for (int i = 1; i <= N; i++) {
    cin >> numbers[i];
    positions[numbers[i]] = i;
  }

  for (int i = 1; i <= N; i++) {
    int current = numbers[i];
    if (current == i)
      continue;

    int ideal_position = i;
    int current_position = positions[i];

    operations.push_back({i, current_position});
    swap(numbers[ideal_position], numbers[current_position]);

    positions[i] = i;
    positions[current] = current_position;
  }

  cout << operations.size() << endl;
  for (auto [a, b] : operations) {
    cout << a << " " << b << endl;
  }
  return 0;
}