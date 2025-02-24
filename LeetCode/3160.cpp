// https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description/
#include <bits/stdc++.h>
using namespace std;

vector<int> queryResults(int limit, vector<vector<int>> &queries) {
  vector<int> answer;
  map<int, int> colors;
  map<int, int> current_colors;

  for (int i = 0; i < queries.size(); i++) {
    int ball = queries[i][0];
    int new_color = queries[i][1];

    if (!current_colors.count(ball)) {
      colors[new_color]++;
      current_colors[ball] = new_color;
    } else if (current_colors[ball] != new_color) {
      colors[new_color]++;
      int current_ball_color = current_colors[ball];

      if (colors[current_ball_color] == 1) {
        colors.erase(current_ball_color);
      } else {
        colors[current_ball_color]--;
      }

      current_colors[ball] = new_color;
    }

    answer.push_back(colors.size());
  }
  return answer;
}

int main() {
  vector<pair<int, vector<vector<int>>>> test_cases = {
      {4, {{1, 4}, {2, 5}, {1, 3}, {3, 4}}},
      {4, {{0, 1}, {1, 2}, {2, 2}, {3, 4}, {4, 5}}},
  };

  for (auto &test : test_cases) {
    vector<int> result = queryResults(test.first, test.second);
    for (auto &r : result) {
      cout << r << " ";
    }
    cout << endl;
  }
  return 0;
}