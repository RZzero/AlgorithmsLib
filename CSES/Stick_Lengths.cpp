#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N;
  cin >> N;
  vector<Long> numbers(N);
  Long sum, floored, ceiled;
  sum = floored = ceiled = 0;
  for (auto &n : numbers) {
    cin >> n;
  }

  sort(numbers.begin(), numbers.end());
  Long answer = 0;
  if (N % 2) {
    Long cost = 0;
    for (int i = 0; i < numbers.size(); i++) {
      cost += abs(numbers[i] - numbers[N / 2]);
    }
    answer = cost;
  } else {
    ceiled = numbers[N / 2];
    floored = numbers[(N / 2) + 1];
    Long ceiled_cost, floored_cost;
    ceiled_cost = floored_cost = 0;

    for (int i = 0; i < numbers.size(); i++) {
      ceiled_cost += abs(numbers[i] - ceiled);
      floored_cost += abs(numbers[i] - floored);
    }
    answer = min(ceiled_cost, floored_cost);
  }

  cout << answer << endl;
  return 0;
}

// 1 2 2 3 4