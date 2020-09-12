#include <stdio.h>

using namespace std;

int bit_count(int n) {
  int cnt = 0;
  while (n) {
    if (n & 1) cnt++;
    n >>= 1;
  }

  return cnt;
}

int main () {
  int bacteria_count;
  scanf("%d", &bacteria_count);
  printf("%d", bit_count(bacteria_count));
  return 0;
}
