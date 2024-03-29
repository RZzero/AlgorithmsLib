#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string time_s;
    cin >> time_s;
    string hour = "";
    hour += time_s[0];
    hour += time_s[1];
    string minutes = "";
    minutes += time_s[3];
    minutes += time_s[4];

    bool is_pm = false;
    int hour_int = stoi(hour);
    if (!hour_int) {
      cout << "12:" << minutes << " AM" << endl;
      continue;
    }

    if (hour_int > 12) {
      if (hour_int % 12 < 10) {
        cout << "0";
      }
      cout << (hour_int % 12) << ":" << minutes << " PM" << endl;
    } else if (hour_int == 12) {
      cout << hour_int << ":" << minutes << " PM" << endl;
    } else {
      cout << hour << ":" << minutes << " AM" << endl;
    }
  }
  return 0;
}