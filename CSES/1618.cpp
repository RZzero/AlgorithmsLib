// https://cses.fi/problemset/task/1618
#include <iostream>
#include <stdio.h>

using namespace std;
typedef __int128_t Long;

Long factorial(Long N) {
  if (N == 0) return 1;
  return N * factorial(N-1);
}

int main () {
  int N;
  cin >> N;

  for (int i = 0; i <= N; i++) {
    cout << i << ": ";
    printf_s("%s\n", factorial(N));
  }
  return 0;
}
