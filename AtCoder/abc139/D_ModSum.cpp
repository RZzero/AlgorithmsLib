#include <bits/stdc++.h>
using namespace std;

using Long = long long;
int main() {
  int N;
  cin >> N;

  Long answer = 0;
  if (N == 1) {
    cout << 0 << endl;
    return 0;
  }
  for (int i = 1; i < N; i++) {
    answer += i % (i + 1); // Could probably use Gauss sum here
  }

  cout << answer << endl;
  return 0;
}