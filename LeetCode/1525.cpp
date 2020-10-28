#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;

  set<int> chars;
  vector<int> SS(S.size() + 2, 0);

  for (int i = S.size()-1; i >= 0; i--) {
    chars.insert(S[i]);
    SS[i] = chars.size();
  }

  int answer = 0;
  set<int> distinct_up_to_i;
  for (int i = 0; i < S.size()-1; i++) {
    distinct_up_to_i.insert(S[i]);
    if (distinct_up_to_i.size() == SS[i+1])
      answer++;
  }

  cout << answer << endl;
  return 0;
}