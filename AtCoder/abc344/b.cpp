#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> answer;
  while (cin >> n) {
    answer.push_back(n);
    if (!n)
      break;
  }

  reverse(answer.begin(), answer.end());

  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << endl;
  }
  return 0;
}