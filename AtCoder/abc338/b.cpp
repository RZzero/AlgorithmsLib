#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> freq(26, 0);
  int most_appear = 0;
  char answer = '/';
  for (int i = 0; i < S.size(); i++) {
    freq[S[i] - 'a']++;
    most_appear = max(most_appear, freq[S[i] - 'a']);
  }

  for (int i = 0; i < 26; i++) {
    if (most_appear == freq[i]) {
      cout << (char)(((int)'a') + i) << endl;
      break;
    }
  }
  return 0;
}