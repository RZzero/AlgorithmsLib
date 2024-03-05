#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long higher_limit = floor(pow(1e18, 1 / 3.));

bool is_palindrome(Long N) {
  bool can = true;
  Long cur = N;
  vector<int> for_checking;
  while (cur > 0) {
    for_checking.push_back(cur % 10);
    cur = cur / 10;
  }

  for (int i = 0; i < for_checking.size() / 2; i++) {
    if (for_checking[i] != for_checking[for_checking.size() - 1 - i]) {
      can = false;
      break;
    }
  }
  return can;
}

int main() {
  Long N;
  cin >> N;

  Long answer = 1;
  for (Long i = 1; i * i * i <= N; i++) {
    Long current_cube = i * i * i;
    if (is_palindrome(current_cube) && current_cube <= N) {
      answer = current_cube;
    }
  }

  cout << answer << endl;
  return 0;
}