// https://cses.fi/problemset/task/1622
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  string S;
  cin >> S;

  sort(S.begin(), S.end());
  vector<string> answer;
  do {
    answer.push_back(S);
  } while(next_permutation(S.begin(), S.end()));

  cout << answer.size() << endl;

  for (auto &ans : answer)
    cout << ans << endl;

  return 0;
}
