#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "codeleet";
  vector<int> indices = {4,5,6,7,0,2,1,3};

  string answer = string(s.size(), '#');

  for (int i = 0; i < s.size(); i++) {
    answer[indices[i]] = s[i];
  }
  cout << answer << endl;
  return 0;
}