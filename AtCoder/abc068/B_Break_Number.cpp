#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int answer = 1;
  for (int i = 1; i <= N; i *= 2) {
    answer = i;
  }
  cout << answer << endl;
  return 0;
}