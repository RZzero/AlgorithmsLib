// https://onlinejudge.org/external/113/11309.pdf
#include <bits/stdc++.h>

using namespace std;

int to_int(string s) {
  int answer = 0;
  for (int i = 0; i < s.size(); i++) {
    answer = (answer * 10) + ((int)s[i]-'0');
  }
  return answer;
}

string reversed_string(string s) {
  reverse(s.begin(), s.end());
  return s;
}

string to_stringg(int n) {
  string answer = "";
  if (n == 0) return "0";
  while (n > 0) {
    answer += (char)(n%10)+'0';
    n /= 10;
  }
  return reversed_string(answer);
}

bool is_time_palindrome(string s) {
  bool can = true;
  string s_copy = s;
  s_copy.pop_back();

  if (s[1] == s[4] && s[0] == s[3] && s[0] == '0') return can;
  if (s_copy == "00:0" && s[4] <= '9') return can;
  if (s[0] == s[1] && s[0] == '0' && (s[3] == s[4])) return can;
  int size_of_s = s.size();
  for (int i = 0; i < size_of_s/2; i++) {
    if (s[i] != s[size_of_s-i-1]) can = false;
  }

  return can;
}

string get_next_hour(string hour, string minutes) {
  string answer = "";
  int next_valid_minute = (to_int(minutes) + 1) % 60;
  int next_valid_hour = to_int(hour);

  if(next_valid_minute == 0) {
    next_valid_hour = (next_valid_hour+1) % 24;
  }
  
  string result_hour = to_stringg(next_valid_hour);
  string result_minutes = to_stringg(next_valid_minute);
  
  result_hour = (next_valid_hour >= 0 && next_valid_hour <=9) ? "0"+result_hour : result_hour;
  result_minutes = (next_valid_minute >= 0 && next_valid_minute <=9) ? "0"+result_minutes : result_minutes;

  answer = result_hour + ":" + result_minutes;
  return answer;
}

vector<string> split_hour(string s) {
  vector<string> answer;
  string hour = "";
  string minutes = "";
  hour+= s[0];
  hour+= s[1];
  minutes+= s[3];
  minutes+= s[4];

  answer.push_back(hour);
  answer.push_back(minutes);
  return answer;
}

// THIS IS ABSURD, I should have implemented the solution thinking instead of
// bruteforcing it... AGHHHHH
int main () {
  // freopen("11309.in", "r", stdin);
  // freopen("11309.out", "w", stdout);

  int T;
  cin >> T;
  while(T--) {
    string s, hour = "", minutes = "";
    cin >> s;

    hour = split_hour(s)[0];
    minutes = split_hour(s)[1];

    string answer = get_next_hour(hour, minutes);
    while (!is_time_palindrome(answer)) {
      hour = split_hour(answer)[0];
      minutes = split_hour(answer)[1];
      answer = get_next_hour(hour, minutes);
    }
    cout << answer;
    if (T) cout << endl;
  }
}
