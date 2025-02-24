#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers;
  numbers.push_back(0);
  for (int i = 0; i < N; i++) {
    int q;
    cin >> q;
    numbers.push_back(q);
  }

  multiset<int> MS;

  for (int i = 1; i <= N; i++) {
    numbers[i] += MS.size();

    if (numbers[i]) {
      int fence = i + numbers[i];
      MS.insert(min(fence, N));

      numbers[i] = max(numbers[i] - (N - i), 0);
    }

    while (MS.size() && MS.find(i) != MS.end()) {
      auto it = MS.find(i);
      MS.erase(it);
    }
  }

  for (int i = 1; i <= N; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
}