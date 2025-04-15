#include <bits/stdc++.h>
using namespace std;

vector<int> closestPrimes(int left, int right) {
  bool is_prime[right + 1];
  memset(is_prime, true, sizeof(is_prime));

  if (left % 2 == 0 && left != 2)
    left++;
  if (right % 2 == 0)
    right--;

  if (abs(left - right) <= 1) {
    return {-1, -1};
  }

  vector<int> prime_nums;
  if (left <= 2 || right == 2) {
    prime_nums.push_back(2);
  }
  for (int i = 3; i <= right; i += 2) {
    if (is_prime[i]) {
      if (i >= left && i <= right) {
        prime_nums.push_back(i);
      }
      for (int j = i + i; j <= right; j += i) {
        is_prime[j] = false;
      }
    }
  }

  if (prime_nums.size() <= 1) {
    return {-1, -1};
  }

  int left_prime = -1;
  int right_prime = -1;

  int min_difference = 1e9;

  for (int i = 1; i < prime_nums.size(); i++) {
    if (prime_nums[i] - prime_nums[i - 1] < min_difference) {
      left_prime = prime_nums[i - 1];
      right_prime = prime_nums[i];
      min_difference = prime_nums[i] - prime_nums[i - 1];
    }
  }

  return {left_prime, right_prime};
}
int main() {
  return 0;
}