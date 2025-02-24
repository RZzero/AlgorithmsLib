#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  deque<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool ser_turn = true;
  int sereja = 0;
  int dima = 0;
  while (numbers.size()) {
    int front = numbers.front();
    int back = numbers.back();

    if (front > back) {
      numbers.pop_front();
      if (ser_turn) {
        sereja += front;
      } else {
        dima += front;
      }
    } else {
      numbers.pop_back();
      if (ser_turn) {
        sereja += back;
      } else {
        dima += back;
      }
    }
    ser_turn = !ser_turn;
  }

  cout << sereja << " " << dima << endl;
  return 0;
}