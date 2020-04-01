// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;

vector<string> days = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main(){
  string s;
  cin >> s;

  int current_s = 0;

  for (int i = 0; i < 7; i++){
    if (days[i] == s) {
      current_s = i;
      break;
    }
  }

  int cnt = 0;
  while(true) {
    if (cnt != 0 && days[current_s] == "SUN") {
      break;
    }
    // cout << days[current_s] << endl;
    cnt++;
    current_s++;
    if (current_s >= 7) current_s = 0;
  }
  cout << cnt << endl;
  return 0;
}