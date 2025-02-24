#include <bits/stdc++.h>

using namespace std;
vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
  vector<int> answer;
  vector<int> last_appereance_A(A.size(), 0);
  vector<int> last_appereance_B(B.size(), 0);

  int cnt = 0;
  for (int i = 0; i < A.size(); i++) {
    last_appereance_A[A[i] - 1] = i;
    last_appereance_B[B[i] - 1] = i;

    if (last_appereance_A[A[i] - 1] <= last_appereance_B[B[i] - 1] && last_appereance_B[B[i] - 1] <= i) {
      cnt++;
    }
    if (last_appereance_B[B[i] - 1] <= last_appereance_A[A[i] - 1] && last_appereance_A[A[i] - 1] <= i) {
      cnt++;
    }

    answer.push_back(cnt);
  }

  // for (auto &l : last_appereance_A) {
  //   cerr << l << " ";
  // }
  // cerr << endl;
  // for (auto &l : last_appereance_B) {
  //   cerr << l << " ";
  // }
  // cerr << endl;
  return answer;
}
int main() {
  vector<pair<vector<int>, vector<int>>> test_cases = {
      {{1, 3, 2, 4}, {3, 1, 2, 4}},
      {{2, 3, 1}, {3, 1, 2}},
  };

  for (auto &t : test_cases) {
    vector<int> answer = findThePrefixCommonArray(t.first, t.second);
    for (auto &l : answer) {
      cout << l << " ";
    }
    cout << endl;
  }
  return 0;
}