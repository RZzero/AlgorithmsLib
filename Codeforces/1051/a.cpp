#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string S;
    cin >> S;
    int lower = 0;
    int upper = 0;
    int digit = 0;
    auto is_lowercase = [&](char s) -> bool {
      return s >= 'a' && s <= 'z';
    };
    auto is_uppercase = [&](char s) -> bool {
      return s >= 'A' && s <= 'Z';
    };
    auto is_digit = [&](char s) -> bool {
      return s >= '0' && s <= '9';
    };
    for (auto &s : S) {
      if (is_lowercase(s))
        lower++;
      else if (is_uppercase(s))
        upper++;
      else if (is_digit(s))
        digit++;
    }

    string answer = "";
    for (auto &s : S) {
      if (!lower && is_uppercase(s) && upper > 1) {
        answer += 'a';
        upper--;
        lower++;
      } else if (!lower && is_digit(s) && digit > 1) {
        answer += 'a';
        lower++;
        digit--;
      } else if (!upper && is_lowercase(s) && lower > 1) {
        answer += 'A';
        lower--;
        upper++;
      } else if (!upper && is_digit(s) && digit > 1) {
        answer += 'A';
        digit--;
        upper++;
      } else if (!digit && is_lowercase(s) && lower > 1) {
        answer += '0';
        lower--;
        digit++;
      } else if (!digit && is_uppercase(s) && upper > 1) {
        answer += '0';
        upper--;
        digit++;
      } else {
        answer += s;
      }
    }
    cout << answer << endl;
  }
  return 0;
}