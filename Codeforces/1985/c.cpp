#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<Long> numbers(N);
    for (auto &n : numbers) {
      cin >> n;
    }
    int answer = 0;

    Long sum = 0;
    Long maxi = 0;
    for (int i = 0; i < N; i++) {
      maxi = max(maxi, numbers[i]);
      sum += numbers[i];
      answer += (sum - maxi) == maxi;
    }
    cout << answer << endl;
  }
  return 0;
}