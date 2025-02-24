#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int minOperations(vector<int> &nums, int k) {
  int steps = 0;
  priority_queue<Long, vector<Long>, greater<Long>> pq;
  for (int i = 0; i < nums.size(); i++) {
    pq.push(nums[i]);
  }

  while (pq.top() < k) {
    steps++;
    if (pq.size() == 1) {
      Long first = pq.top();
      pq.pop();
      pq.push(first * 2 + first);
    } else {
      Long first = pq.top();
      pq.pop();
      Long second = pq.top();
      pq.pop();
      pq.push(first * 2 + second);
    }
  }
  return steps;
}

int main() {
  vector<pair<vector<int>, int>> test_cases = {
      {{2, 11, 10, 1, 3}, 10},
      {{1, 1, 2, 4, 9}, 20},
  };

  for (auto &t : test_cases) {
    cout << minOperations(t.first, t.second) << endl;
  }
  return 0;
}