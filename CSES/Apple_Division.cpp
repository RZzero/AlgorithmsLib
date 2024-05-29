// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long answer = 0;
int N;

Long min_difference_all_subsets(vector<Long> &weights, string current_way = "", Long current_min_diff = 1e18) {
  if (current_way.size() > N)
    return 1e18;

  if (current_way.size() == N) {
    Long group_a = 0, group_b = 0;
    for (int i = 0; i < current_way.size(); i++) {
      if (current_way[i] == '1')
        group_a += weights[i];
      else
        group_b += weights[i];
    }
    return min(current_min_diff, abs(group_a - group_b));
  }

  Long answer1 = min_difference_all_subsets(weights, current_way + "0", current_min_diff);
  Long answer2 = min_difference_all_subsets(weights, current_way + "1", current_min_diff);

  return min(answer1, answer2);
}

int main() {
  cin >> N;
  vector<Long> weights(N);
  for (auto &w : weights)
    cin >> w;

  cout << min_difference_all_subsets(weights) << endl;
  return 0;
}