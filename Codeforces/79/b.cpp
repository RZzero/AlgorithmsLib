// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;

int sumDigits(string &s) {
  Long sum = 0;
  for (auto &c: s) {
    int currentDigit = c-'0';
    sum+= currentDigit;
  }
  return sum;
}

string intToString(int n) {
  string ss= "";
  while(n > 0){
    char cur = n%10 + '0';
    ss+= cur;
    n = n / 10;
  }
  reverse(ss.begin(), ss.end());
  return ss;
}

int main(){
  string s;
  cin >> s;

  int answer = 0;
  while (s.size() > 1) {
    string new_s = intToString(sumDigits(s));
    s = new_s;
    answer++;
  }
  cout << answer << endl;
  return 0;
}