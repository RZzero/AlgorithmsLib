#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  if (N == 1)
    cout << "=" << endl;
  else if (N == 2)
    cout << "==" << endl;
  else {
    bool is_even = !(N % 2);
    string answer = "";
    for (int i = 1; i <= N; i++) {
      if ((is_even && (i == (N / 2) || (i == ((N / 2) + 1)))) || !is_even && i == ((N + 1) / 2)) {
        answer += "=";
      } else {
        answer += "-";
      }
    }
    cout << answer << endl;
  }
  return 0;
}