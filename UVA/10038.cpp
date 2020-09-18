// https://onlinejudge.org/external/100/10038.pdf
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int N;
  ios_base:: sync_with_stdio(0);
  cin.tie(NULL);

  while (cin >> N) {
    vector<bool> exists(N, false);
    vector<int> numbers;

    for(int i = 0; i < N; i++) {
      int dum; cin >> dum;
      numbers.push_back(dum);
    }

    bool can = true;
    for (int i = 1; i < numbers.size(); i++) {
      int abs_diff = abs(numbers[i-1]-numbers[i]);
      if (abs_diff >= 1 && abs_diff <= N-1) {
        exists[abs_diff] = true;
      }
    }

    for (int i = 1; i < N; i++) {
      if (!exists[i])
        can = false;
    }
    
    if (N == 1 || can) {
      cout << "Jolly" << endl;
    } else {
      cout << "Not jolly" << endl;
    }
  }
  return 0;
}