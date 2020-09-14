#include <iostream>
#include <bitset>

using namespace std;
typedef long long Long;

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  Long currentNumber;

  while (cin >> currentNumber && currentNumber != 0) {
    Long A, B;
    A = B = 0;

    for (int i = 0, number_of_ones = 0; currentNumber > 0; i++) {
      if (currentNumber & 1) {
        number_of_ones++;

        if (number_of_ones % 2 == 0) {
          B |= (1LL << i);
        } else {
          A |= (1LL << i);
        } 
      }

      currentNumber >>= 1;
    }

    cout << A << " " << B << endl;
  }
  return 0;
}