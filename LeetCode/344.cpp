#include <bits/stdc++.h>

using namespace std;

string reverseString(vector<char> &S) {
  for (int i = 0; i < S.size() / 2; i++) {
    char tmp = S[i];
    S[i] = S[S.size()-i-1];
    S[S.size()-i-1] = tmp;
  }
}

int main () {
  
  return 0;
}
