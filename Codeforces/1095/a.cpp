// https://codeforces.com/problemset/problem/1095/A
#include <iostream>

using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  string answer = "";

  if (N == 1) {
    cout << S << endl;
  } else {
    int cur = 1;
    for(int i = 1; cur < N; i++) {
      answer+= S[cur-1];
      cur += i;
    }
    cout << answer << endl;
  }
  return 0;
}