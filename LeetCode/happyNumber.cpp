#include <iostream>
#include <vector>
#include <map>

using namespace std;

int initialSumOfTheDigits (int n) {
  int initialSumOfDigits = 0;
  while (n > 0) {
    initialSumOfDigits += n % 10;
    n = n / 10;
  }
  return initialSumOfDigits;
}

int getSquaredSumOfDigits(int n) {
  int squaredSumOfdigits = 0;
  while (n > 0) {
    squaredSumOfdigits += (n % 10) * (n % 10);
    n = n / 10;
  }
  return squaredSumOfdigits;
}

void bruteForce () {
  vector<int> tienenTo;
  vector<int> theInitialSumOfTo;
  for (int i = 1; i <= 200; i++) {
    int currentNumber = i;
    int initialSumOfDigits = initialSumOfTheDigits(i);
    int elCount = 0;
    cout << "For number " << currentNumber << " initial sum was: " << initialSumOfDigits << " and process was: ";
    while (currentNumber != 1 && elCount < 100) {
      currentNumber = getSquaredSumOfDigits(currentNumber);
      cout << currentNumber << " ";
      elCount++;
    }
    
    if (currentNumber == 1) {
      tienenTo.push_back(i);
      theInitialSumOfTo.push_back(initialSumOfDigits);
    }
    cout << endl;
  }
  cout << endl;
  cout << "Los que tienen to " << tienenTo.size() << endl;
  for (int i = 0; i < tienenTo.size(); i++) {
    cout << tienenTo[i] << " -> " << theInitialSumOfTo[i] << " " << endl;
  }
}

bool leapOfFaith (int n) {
  int elCount = 0;
  while (n != 1 && elCount < 100) {
    n = getSquaredSumOfDigits(n);
    elCount++;
  }

  return n == 1 ? true : false;
}

int main() {
  cout << leapOfFaith(19) << endl;
  return 0;
}

// number ->
// Initial sum of it digits ->
// Does got to 1 after 20 iterations