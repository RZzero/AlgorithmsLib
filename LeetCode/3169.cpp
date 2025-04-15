#include <bits/stdc++.h>
using namespace std;
bool comparator(vector<int> &a, vector<int> &b) {
  return a[0] < b[0];
}

int countDays(int days, vector<vector<int>> &meetings) {
  // sort(meetings.begin(), meetings.end());
  int answer = days;

  pair<int, int> cur = {-1, -1};
  for (int i = 0; i < meetings.size(); i++) {
    if (i == 0 && meetings[])
      answer -= (r - l) + 1;
  }
  return answer;
}

int main() {
  vector<pair<int, vector<vector<int>>>> test_cases = {
      {10, {{5, 7}, {1, 3}, {9, 10}}},
      {5, {{2, 4}, {1, 3}}},
      {6, {{1, 6}}},
  };

  for (auto &t : test_cases) {
    cout << countDays(t.first, t.second) << endl;
  }
  return 0;
}