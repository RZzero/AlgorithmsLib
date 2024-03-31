#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  while (N--) {
    vector<int> numbers(4);
    for (auto &n : numbers)
      cin >> n;

    int in_front = 0;
    for (int i = 1; i < numbers.size(); i++) {
      if (numbers[i] > numbers[0])
        in_front++;
    }
    cout << in_front << endl;
  }
  return 0;
}