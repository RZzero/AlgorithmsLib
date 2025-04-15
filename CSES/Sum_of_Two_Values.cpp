#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N, X;

  cin >> N >> X;
  vector<int> numbers(N);
  map<Long, vector<int>> mapa;

  for (int i = 0; i < numbers.size(); i++) {
    cin >> numbers[i];
    mapa[numbers[i]].push_back(i + 1);
  }

  Long a = -1, b = -1;
  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] >= X)
      continue;

    Long cur = abs(X - numbers[i]);
    if (mapa.count(cur) && ((cur == numbers[i] && mapa[cur].size() > 1) || cur != numbers[i])) {
      a = i + 1;
      b = cur == numbers[i] ? mapa[cur].back() : mapa[cur][0];
      break;
    }
  }

  if (a == -1)
    cout << "IMPOSSIBLE" << endl;
  else
    cout << a << " " << b;
  return 0;
}