#include <bits/stdc++.h>

using namespace std;

int solve_without_ps(int N, vector<int> numbers) {
  int cnt = 0;
  vector<bool> possible_sums(N + 1, 0);
  for (int i = 0; i < numbers.size(); i++) {
    int accumulated = numbers[i];
    for (int j = i+1; j < numbers.size(); j++) {
      accumulated += numbers[j];
      if (accumulated > N) break;
      possible_sums[accumulated] = true;
    }
  }

  for (int i = 0; i < numbers.size(); i++) {
    cnt += possible_sums[numbers[i]];
  }

  return cnt;
}

int solve_with_ps(int N, vector<int> numbers) {
  int cnt = 0;
  vector<int> prefix_sum(N+1, 0);
  for(int i = 0; i < numbers.size(); i++) {
    prefix_sum[i+1] = numbers[i] + prefix_sum[i];
  }

  vector<bool> special(N+1, 0);
  for (int i = 0; i < prefix_sum.size(); i++) {
    for (int j = i + 2; j < prefix_sum.size(); j++) {
      if (prefix_sum[j] - prefix_sum[i] > N) continue;
      special[prefix_sum[j] - prefix_sum[i]] = true;
    }
  }

  for (auto &n: numbers) {
    cnt += special[n];
  }
  return cnt;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (int i = 0; i < numbers.size(); i++) {
      cin >> numbers[i];
    }

    int answer = solve_without_ps(N, numbers);
    // int answer = solve_with_ps(N, numbers);
    cout << answer << endl;
  }
  return 0;
}