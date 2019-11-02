#include <bits/stdc++.h>
  
using namespace std;

string to_str(int x) {
  string ans = "";
  while(x > 0) {
      ans += (x % 10) + '0';
      x /= 10;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main()
{
  long long k,p;
  
  cin >> k >> p;
  long long cnt = 0;
  long long sum = 0;
  for(long long i = 1; cnt < k; i++){
    string s = to_str(i);
    long long sizeOfS = (long long) s.size();
    if(s.size()%2 == 0){
      bool palindrome = true;
      for (long long i = 0; i < sizeOfS / 2; i++) {
        if (s[i] != s[sizeOfS-i-1]) palindrome = false;
      }
      if (palindrome) {
        cnt++;
        sum += i;
      }
    }
    double exponentOf10 = log(i);
    int intExp = exponentOf10;
    if ((ceil(exponentOf10) == floor(exponentOf10)) && intExp % 2 == 0) {
      i = pow(10, exponentOf10 + 1) - 1;
    }
  }
  if (sum >= p) {
    cout << sum % p<< endl;
  } else {
    cout << sum << endl;
  }
  return 0;
}