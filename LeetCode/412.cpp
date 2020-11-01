#include <bits/stdc++.h>

using namespace std;

using Long = long long;

int main() {
  vector<string> answer;
  int N = 15;
  for (int i = 1; i <= N; i++) {
    if (i % 5 == 0 && i % 3 == 0) answer.push_back("FizzBuzz");
    else if (i % 5 == 0) answer.push_back("Buzz");
    else if (i % 3 == 0) answer.push_back("Fizz");
    else {
      answer.push_back(to_string(i));
    }
  }

  return 0;
}
