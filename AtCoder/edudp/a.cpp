#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
const int LIMIT = 100000 + 7;
int N;
vector<Long> heights;
Long MEMO[LIMIT];
bool visited[LIMIT];

Long RECURSIVE_DP(int index) {
  if (visited[index])
    return MEMO[index];

  if (index >= N)
    return 1e18;

  if (index == N - 1)
    return 0;

  Long res1 = 1e18;
  Long res2 = 1e18;

  res1 = abs(heights[index] - heights[index + 1]) + RECURSIVE_DP(index + 1);
  res2 = abs(heights[index] - heights[index + 2]) + RECURSIVE_DP(index + 2);

  Long res = min(res1, res2);

  visited[index] = true;
  return MEMO[index] = res;
}

int main() {
  cin >> N;
  heights = vector<Long>(N);

  memset(MEMO, 1000000000 * 1LL, sizeof(MEMO));

  for (auto &n : heights)
    cin >> n;

  vector<Long> answer(N);
  cout << RECURSIVE_DP(0) << endl;

  vector<Long> IT(N, 0);
  return 0;
}