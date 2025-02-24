#include <bits/stdc++.h>
using namespace std;

int xorAllNums(vector<int> &nums1, vector<int> &nums2) {
  int answer = 0;
  map<int, int> lhs;
  map<int, int> rhs;

  for (auto &n : nums1) {
    lhs[n]++;
  }
  for (auto &n : nums2) {
    rhs[n]++;
  }

  int distinct_nums1_pairs = nums1.size();
  int distinct_nums2_pairs = nums2.size();

  for (auto &lh : lhs) {
    if (lh.second % 2 == 0 || distinct_nums2_pairs % 2 == 0)
      continue;
    // cerr << lh.first << " ";
    answer ^= lh.first;
  }

  for (auto &rh : rhs) {
    if (rh.second % 2 == 0 || distinct_nums1_pairs % 2 == 0)
      continue;
    // cerr << rh.first << " ";
    answer ^= rh.first;
  }
  // cerr << endl;
  return answer;
}

int main() {
  vector<pair<vector<int>, vector<int>>> test_cases = {
      {{2, 1, 3}, {10, 2, 5, 0}},
      {{1, 2}, {3, 4}},
      {{8, 6, 29, 2, 26, 16, 15, 29}, {24, 12, 12}},
  };

  for (auto &t : test_cases) {
    cout << xorAllNums(t.first, t.second) << endl;
  }
  return 0;
}