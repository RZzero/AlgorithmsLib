// https://onlinejudge.org/external/113/11332.pdf

#include <bits/stdc++.h>

using namespace std;

string to_stringg(int N) {
  string answer = "";

  while (N > 0) {
    answer+= (char)((N%10) + '0');
    N /= 10;
  }
  reverse(answer.begin(), answer.end());
  return answer;
}

string get_mex(string S) {
  if (S.size() == 1)
    return S;
  
  string current_mex = S;
  int sum = 0;

  for (auto c: current_mex) {
    sum+= (int)(c-'0');
  }

  return get_mex(to_stringg(sum));
}

int main () {
  string S;
  while(cin >> S) {
    if (S == "0") break;

    cout << get_mex(S) << endl;
  }
  return 0;
}
