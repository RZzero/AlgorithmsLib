#include <bits/stdc++.h>

using namespace std;

int main() {
  int T; cin >> T;
  while (T--) {
    int r; cin >> r;

    auto getDivision = [](int rating) -> string {
      string answer = "Division ";
      int division = 1;
      if (rating >= 1600 && rating <= 1899) division = 2;
      if (rating >= 1400 && rating <= 1599) division = 3;
      if (rating <= 1399) division = 4;
      return answer += to_string(division);
    };
  
    cout << getDivision(r) << endl;
  }
  return 0;
}