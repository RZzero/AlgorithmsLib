// https://onlinejudge.org/external/104/10424.pdf
#include <bits/stdc++.h>
using namespace std;

int calculate_val(string s) {
  int val = 0;
  for (auto k: s) {
    auto c = tolower(k);
    if (c >= 'a' && c <= 'z') {
      val += ((int)c-'a') + 1;
    }
  }
  return val;
}

int mex(int N) {
  if (N < 10) return N;

  int cur_val = 0;
  while (N > 0) {
    cur_val += N%10;
    N /= 10;
  }

  return mex(cur_val);
}

int main () {
  freopen("10424.in", "r", stdin);
  freopen("10424.out", "w", stdout);
  string a,b;
  while(getline(cin, a)) {
    getline(cin, b);
    int a_value = mex(calculate_val(a));
    int b_value = mex(calculate_val(b));
    cout << fixed << setprecision(2) << (min(a_value,b_value)*1.0 / max(a_value,b_value)) * 100 << " %" <<endl;
  }
  return 0;
}
