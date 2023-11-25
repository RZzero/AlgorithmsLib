#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> ratings(N);
  for (auto &r: ratings) cin >> r;

  int sum = 0;
  for (int i = 0; i < ratings.size(); i++)
    sum += ratings[i] <= X ? ratings[i] : 0;

  cout << sum << endl;
  return 0;
}