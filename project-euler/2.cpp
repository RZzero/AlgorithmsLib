// https://projecteuler.net/problem=2
#include <iostream>

using namespace std;
const int LIMIT = 4 * 1e6;
typedef long long Long;

int main() {
  int fibo1 = 0;
  int fibo2 = 1;

  Long answer = 0;
  while (fibo1 <= LIMIT && fibo2 <= LIMIT) {
    int sum = fibo1 + fibo2;
    if (!(sum&1))
      answer += sum;
    
    int tmp = fibo2;
    fibo1 = fibo2;
    fibo2 = sum;
  }

  cout << answer << endl;
  return 0;
}
