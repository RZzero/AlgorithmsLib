#include <bits/stdc++.h>
using namespace std;
using Long = long long;

Long get_cost_both_being_same(vector<Long> &costs, string &S, int &i, char match) {
  Long answer = 0;
  if (S[i] != match) {
    answer += costs[i];
  }
  if (S[i + 1] != match) {
    answer += costs[i + 1];
  }
  return answer;
}

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<Long> costs(N);
  for (auto &c : costs) {
    cin >> c;
  }

  // Cost of 1010 -> posiciones impares son 1
  // Cost of 0101 -> posiciones pares son 1
  vector<Long> PS_impares(N + 1);
  vector<Long> PS_pares(N + 1);
  Long answer = 4 * 1e18;

  for (int i = 0; i < N; i++) {
    Long cost = costs[i];
    int current_ps_index = i + 1;
    bool should_be_one = current_ps_index % 2 == 1 && S[i] == '1';
    bool should_be_zero = current_ps_index % 2 == 0 && S[i] == '0';

    if (should_be_one || should_be_zero) {
      PS_impares[current_ps_index] = PS_impares[current_ps_index - 1];
    } else {
      PS_impares[current_ps_index] = PS_impares[current_ps_index - 1] + cost;
    }
  }

  for (int i = 0; i < N; i++) {
    Long cost = costs[i];
    int current_ps_index = i + 1;
    bool should_be_one = current_ps_index % 2 == 0 && S[i] == '1';
    bool should_be_zero = current_ps_index % 2 == 1 && S[i] == '0';

    if (should_be_one || should_be_zero) {
      PS_pares[current_ps_index] = PS_pares[current_ps_index - 1];
    } else {
      PS_pares[current_ps_index] = PS_pares[current_ps_index - 1] + cost;
    }
  }

  for (int i = 0; i < N - 1; i++) {
    Long left_cost_one = 0, left_cost_zero = 0, right_cost_one = 0, right_cost_zero = 0;
    Long cost_both_one = get_cost_both_being_same(costs, S, i, '1');
    Long cost_both_zero = get_cost_both_being_same(costs, S, i, '0');

    int one_based_index = i + 1;

    left_cost_zero = one_based_index % 2 == 0 ? PS_pares[one_based_index - 1] : PS_impares[one_based_index - 1];
    left_cost_one = one_based_index % 2 == 0 ? PS_impares[one_based_index - 1] : PS_pares[one_based_index - 1];
    right_cost_one = one_based_index % 2 == 0 ? PS_pares[N] - PS_pares[one_based_index + 1] : PS_impares[N] - PS_impares[one_based_index + 1];
    right_cost_zero = one_based_index % 2 == 0 ? PS_impares[N] - PS_impares[one_based_index + 1] : PS_pares[N] - PS_pares[one_based_index + 1];

    Long both_being_ones = left_cost_zero + cost_both_one + right_cost_zero;
    Long both_being_zeroes = left_cost_one + cost_both_zero + right_cost_one;

    answer = min(answer, min(both_being_ones, both_being_zeroes));
  }
  cout << answer << endl;
  return 0;
}