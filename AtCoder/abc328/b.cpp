#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> months(N);
  for (auto &m: months) cin >> m;

  int answer = 0;
  for (int i = 0; i < months.size(); i++) {
    int current_month = i+1;

    auto is_rep_digit_month = [](int month_number) -> bool {
      bool can = true;
      int last_digit = month_number%10;
      while (month_number) {
        can = last_digit == month_number%10;
        if (!can) break;

        month_number = month_number / 10;
      }
      return can;
    };

    if (!is_rep_digit_month(current_month)) continue;
    
    auto get_rep_digit_count = [](int days_in_month, int digit) -> int {
      int current_day = digit;
      int cnt = 0;
      while(current_day <= days_in_month) {
        current_day = current_day*10 + digit;
        cnt++;
      }
      return cnt;
    };

    answer += get_rep_digit_count(months[i], (i+1)%10);
  }

  cout << answer << endl;
  return 0;
}