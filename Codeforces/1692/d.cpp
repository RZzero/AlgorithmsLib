#include <bits/stdc++.h>
using namespace std;

string add_x_to_time(string current_time, int minutes_to_add) {
  int current_minutes = stoi(current_time.substr(3));
  int hours_to_add = minutes_to_add / 60;

  int real_minutes_to_add = minutes_to_add % 60;
  if (current_minutes + real_minutes_to_add >= 60) {
    hours_to_add += 1;
  }

  auto pad_with_zero = [&](string s) -> string {
    return s.size() == 1 ? "0" + s : s;
  };

  string hour = current_time.substr(0, 2);
  string minutes = to_string((current_minutes + real_minutes_to_add) % 60);
  minutes = pad_with_zero(minutes);

  if (hours_to_add) {
    int current_hour = stoi(current_time.substr(0, 2));
    current_hour += hours_to_add;
    hour = pad_with_zero(to_string(current_hour % 24));
  }
  return hour + ":" + minutes;
}

bool is_palindrome_time(string s) {
  return s[0] == s[4] && s[1] == s[3];
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    string initial_time;
    int minutes_to_add;
    cin >> initial_time >> minutes_to_add;
    int answer = 0;
    string current_time = "";
    while (current_time != initial_time) {
      current_time = add_x_to_time((current_time == "" ? initial_time : current_time), minutes_to_add);
      // cout << current_time << endl;
      answer += is_palindrome_time(current_time);
    }
    // cout << endl;
    cout << answer << endl;
  }
  return 0;
}

/*
1
03:12 360
1
00:00 1
*/