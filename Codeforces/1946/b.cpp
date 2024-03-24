#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int MOD = 1000000007;

Long max_subarray_sum(vector<Long> numbers) {
  Long best_sum = 0;
  Long current_sum = 0;

  for (int i = 0; i < numbers.size(); i++) {
    Long n = numbers[i];
    current_sum = max(0LL, current_sum + n);
    best_sum = max(best_sum, current_sum);
  }
  return best_sum;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    Long N, K;
    cin >> N >> K;
    vector<Long> numbers(N);
    for (auto &n : numbers)
      cin >> n;

    Long answer = 0;
    vector<Long> for_answer = numbers;
    Long initial_sum =
        for (int i = 0; i < K; i++) {
      if (!answer) {
        answer = max_subarray_sum(numbers);
      } else {
        answer *= 2 % MOD;
      }
      for_answer.push_back(answer);
    }

    // for (int i = 0; i < for_answer.size(); i++) {
    //   cout << for_answer[i] << " ";
    // }
    // cout << endl;
    Long sum = (accumulate(for_answer.begin(), for_answer.end(), 0)) % MOD;
    if (sum < 0) {
      cout << (MOD + sum) << endl;
    } else {
      cout << sum % MOD << endl;
    }
  }
  return 0;
}