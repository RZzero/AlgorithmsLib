#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VII;
typedef pair<int, int> PI;
typedef vector<PI> VPI;

using Long = long long;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, X, Y;
    cin >> N >> X >> Y;
    map<PI, int> frequency;
    VI numbers(N);

    for (auto &n : numbers)
      cin >> n;

    Long answer = 0;
    for (auto &j : numbers) {
      answer += frequency[{j % X, j % Y}];
      frequency[{(X - j % X) % X, j % Y}]++;
    }
    cout << answer << endl;
  }
  return 0;
}