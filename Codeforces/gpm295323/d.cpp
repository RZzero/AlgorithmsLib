#include <iostream>
using namespace std;
 
int gcd (int a, int b) {
  while (b) {
    a %= b;
    swap(a, b);
  }
  return a;
}
 
int main() {
  int N, K;
  scanf("%d%d", &N, &K);
 
  int evens, odds, ones;
  evens = odds = ones = 0;
  
  int the_gcd = -1;
  for (int i = 0; i < N; i++) {
    int dum; scanf("%d", &dum);
    if (dum == 1) ones++;
    else if (dum & 1) odds++;
    else evens++;
 
    if (dum != 1 && (dum & 1)) {
      the_gcd = the_gcd == -1 ? dum : gcd(dum, the_gcd);
    }
  }
  
  
  if ((evens >= N-1) || (odds >= N-1 && the_gcd > 1 && ones <= 1 && the_gcd != -1)) {
    printf("YES");
  } else {
    printf("NO");
  }
 
  return 0;
}