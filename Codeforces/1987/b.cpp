#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (auto &n : numbers)
      cin >> n;

    int maxi = numbers[0];
    for (int i = 0; i < numbers.size();) {
      if (numbers[i] > maxi) {
        maxi = numbers[i];
      } else {
        numbers[i] = abs(numbers[i] - maxi);
        i++;
      }
    }

    vector<Long> list;
    for (auto &n : numbers) {
      if (n)
        list.push_back(n);
    }
    sort(list.begin(), list.end());

    Long sum = 0;
    Long resta = 0;
    int qty = list.size();
    for (int i = 0; i < list.size(); i++) {
      list[i] -= resta;
      sum += (qty + 1) * 1LL * list[i];
      resta += list[i];
      qty--;
    }
    cout << sum << endl;
  }
  return 0;
}
/*
1
7
8 2 4 16 5  9 20

0 6 4 00 11 7 00

4
6
7
11
*/