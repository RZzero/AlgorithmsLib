#include <iostream>

using namespace std;
typedef long long Long;

int main() {
  int days;
  cin >> days;

  Long balance = 0;
  Long answer = 0;
  Long day_ans = 0;

  for (int i = 0; i < days; i++) {
    int dum; cin >> dum;
    balance += dum;
    if (balance > answer) {
      answer = max(balance, answer);
      day_ans = i+1;
    }
  }
  cout << day_ans << endl;
  return 0;
}
