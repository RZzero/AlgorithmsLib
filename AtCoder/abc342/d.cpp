#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  vector<Long> numbers(N);

  // cout << squares.size() << endl;
  // cout << sqrt(2 * 1e5) << endl;
  // 448 cuadrados.
  // 10^2 * 10^5 = 10^7
  map<Long, Long> mapa;
  for (auto &n : numbers) {
    cin >> n;
    mapa[n]++;
  }

  set<Long> squares;
  // vector<Long> squares;
  Long limit = 50;
  // Long limit = 1LL * 2 * 1e5 + 1;
  for (Long i = 2; i * i < limit; i++) {
    squares.insert(i * i * 1LL);
  }

  Long answer = 0;
  for (auto &element : mapa) {
    if (element.first == 0)
      continue;
    for (auto &sq : squares) {
      if (mapa.count(sq / element.first)) {
        if (sq > element.first && (sq / element.first) != 0) {
          cout << sq << " " << element.first << " ->";
          cout << sq / element.first << " ";
          answer += mapa[sq / element.first];
        }
      }
    }
    cout << endl;
  }

  cout << answer << endl;
  return 0;
}