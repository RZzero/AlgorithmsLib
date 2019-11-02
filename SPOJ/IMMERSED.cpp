#include <bits/stdc++.h>
using namespace std;
double EPS = 0.000001;
//P = N*Nˆ(cN) ;
double binarySearch(double P, double C) {
  double lo = 1, hi = 18;
  double mid;
  while(hi-lo >= EPS) {
    mid = lo + (hi - lo) / 2.0;
    if (P - (mid * pow(mid,mid*C)) > 0) {
      lo = mid;
    } else {
      hi = mid;
    }
  }
  return lo + (hi - lo) / 2.0;
}

int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    double P, C;
    scanf("%lf%lf", &P, &C);
    printf("%.6lf\n", binarySearch(P, C));
  }
  return 0;
}