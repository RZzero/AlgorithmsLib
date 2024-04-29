#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int N;
  cin >> N;

  vector<Long> operations;
  for (int i = 0; i < N; i++) {
    Long k;
    cin >> k;
    operations.push_back(k);
  }

  deque<Long> balls;
  for (int i = 0; i < N; i++) {

    balls.push_back(operations[i]);

    while (balls.size() >= 2) {
      Long first = balls.back();
      Long second = balls[balls.size() - 2];

      if (first != second) {
        break;
      } else {
        balls.pop_back();
        balls.pop_back();
        if (!first && !second) {
          balls.push_back(1);
        } else {
          balls.push_back(first + 1);
        }
      }
    }
  }

  cout << balls.size() << endl;
  return 0;
}