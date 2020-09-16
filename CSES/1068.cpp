// https://cses.fi/problemset/task/1068
#include <cstdio>

using namespace std;
typedef long long Long;

int main () {
  Long n;

  scanf("%lld", &n);
  printf("%lld ", n);
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
      printf("%lld ", n);
    } else {
      n = n * 3 + 1;
      printf("%lld ", n);
    }
  }
  return 0;
}