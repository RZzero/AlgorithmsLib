// https://projecteuler.net/problem=9

#include <iostream>

using namespace std;
const int thousand = 1000;
typedef long long Long;

Long brute_force () {
  Long product = 0;

  for (int a = 1; a <= thousand; a++) {
    for (int b = a+1; b <= thousand; b++) {
      int c = thousand-a-b;
      if (c > a && c > b && a+b+c == thousand) {
        if ((a*a)+(b*b) == (c*c)) {
          product = a*b*c*1LL;
        }
      }
    }
  }
  return product;
}

int main () {
  // There exists exactly one Pythagorean triplet for
  // which a + b + c = 1000.
  // a^2 + b^2 = c^2

  cout << brute_force() << endl;
 
  return 0;
}