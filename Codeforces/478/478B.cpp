#include <bits/stdc++.h>
using namespace std;

using Long = long long;
Long Gauss(Long N) {
  return (N * (N - 1)) / 2;
}

Long getMax(Long N, Long M) {
  Long K = N - M + 1;
  return max(1LL * 0, Gauss(K));
}

Long getMin (Long N, Long M) {
  if ( N % M == 0) {
    return Gauss(N / M) * M;
  }
  return Gauss( N / M + 1) * (N % M) + Gauss(N / M) * (M - N % M);
}

int main(){
  int N, M;
  cin >> N >> M;
  cout << getMin(N, M) << " " << getMax(N, M) << endl;
  return 0;
}