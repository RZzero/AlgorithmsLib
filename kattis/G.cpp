#include <bits/stdc++.h>
using namespace std;

int main(){
  double r,c;
  cin >> r >> c;
  double C = (M_PI * r * r) - (M_PI * (r-c) * (r-c));
  double anw = (1 - (C / (M_PI * r * r))) * 100;
  printf("%.6f", anw);
  return 0;
}

