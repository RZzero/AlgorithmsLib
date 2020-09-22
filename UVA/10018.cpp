// https://onlinejudge.org/external/100/10018.pdf
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

bool is_palindrome(string S) {
  bool can = true;
  int size_of_s = S.size();
  for(int i = 0; i < size_of_s; i++) {
    if (S[i] != S[size_of_s-i-1])
      can = false;
  }
  return can;
}

string to_stringg(Long N) {
  string result = "";
  while (N > 0) {
    result += (char)(N%10)+'0';
    N /= 10;
  } 

  reverse(result.begin(), result.end());
  return result;
}

Long to_number(string S) {
  Long current_number = 0;
  for (auto c: S) {
    current_number = (current_number * 1LL * 10) + (Long)c-'0';
  }
  return current_number;
}

int main () {

  int T;
  cin >> T;
  while (T--) {
    Long N;
    cin >> N;
    
    Long current_number = N;
    int count = 0;

    while (!is_palindrome(to_stringg(current_number))) {
      string reversed_current_number = to_stringg(current_number);
      reverse(reversed_current_number.begin(), reversed_current_number.end());
      
      current_number += to_number(reversed_current_number);

      count++;
    }

    cout << count << " " << current_number << endl;
  }
  return 0;
}
