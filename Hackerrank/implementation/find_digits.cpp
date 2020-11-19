#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int answer = 0;
    int number; cin >> number;
    int original_number = number;
    while (number > 0) {
      int current_digit = number % 10;
      if (current_digit && !(original_number % current_digit)) {
        answer++;
      }
      number /= 10;
    }
    cout << answer << endl;
  }
  return 0;
}
