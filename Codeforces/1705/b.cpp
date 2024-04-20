#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    vector<Long> numbers(N);
    for (auto &n : numbers)
      cin >> n;

    bool zeroes_matter = false;
    Long answer = 0;
    for (int i = 0; i < N - 1; i++) {
      if (numbers[i] == 0 && zeroes_matter)
        answer += 1;
      else if (numbers[i]) {
        zeroes_matter = true;
        answer += numbers[i];
      }
    }

    cout << answer << endl;
  }
  return 0;
}