#include <bits/stdc++.h>

using namespace std;

int main () {

  int N, X;
  cin >> N >> X;
  vector<int> numbers;

  for (int i = 0; i < N; i++) {
    int n; cin >> n;
    numbers.push_back(n);
  }

  sort(numbers.begin(), numbers.end());

  int answer = 1;

  for (int i = 1; i < N; i++) {
    if (numbers[i] + numbers[i-1] <= X) {
      answer++;
    } else {
      break;
    }
  }

  cout << answer << endl;
  return 0;
}
