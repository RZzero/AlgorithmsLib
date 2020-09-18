#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> &numbers) {
  for (int i = 9; i >= 0; i--) {
    if (!numbers[i]) continue;
    for (int j = 0; j < numbers[i]; j++) {
      cout << i;
    }
  }
}

int main() {
  int N;
  cin >> N;

  vector<int> digits(10);
  int has_even = 0;
  for (int i = 0; i < N; i++) {
    int dum; cin >> dum;
    digits[dum]++;
    if (dum %2 == 0) has_even++;
  }

  if (!has_even) {
    cout << -1 << endl;
  } else {
    if (has_even == 1) {
      // Select only even
      int only_even;
      for (int i = 0; i <= 8; i+=2) {
        if (!digits[i]) continue;
        only_even = i;
        digits[i]--;
      }

      print_array(digits);
      cout << only_even;
    } else {
      int smallest_even = -1;
      for (int i = 0; i <= 8; i+=2) {
        if (digits[i]) {
          digits[i]--;
          smallest_even = i;
          break;
        }
      }
      print_array(digits);
      cout << smallest_even;
    }
  }
  return 0;
}
