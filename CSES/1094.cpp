// https://cses.fi/problemset/task/1094
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
  int n;
  cin >> n;

  vector<int> numbers;
  for (int i = 0; i < n; i++) {
    int dum; cin >> dum;
    numbers.push_back(dum);
  }

  long long answer1 = 0;
  long long answer2 = 0;
  bool can1 = false;
  bool can2 = false;

  for(int i = 1; i < n; i++) {
    if (numbers[i] < numbers[i-1]) {
      can1 = true;
      answer1 += abs(numbers[i]-numbers[i-1]);
      numbers[i] = numbers[i-1];
    }
  }

  for (int i = n-2; i >= 0; i--) {
    if (numbers[i] > numbers[i+1]) {
      can2 = true;
      answer2 += abs(numbers[i]-numbers[i+1]);
      numbers[i] = numbers[i+1];
    }
  }

  if (can1 && can2) {
    cout << min(answer1, answer2) << endl;
  } else if (can1) {
    cout << answer1 << endl;
  } else {
    cout << answer2 << endl;
  }
  return 0;
}
