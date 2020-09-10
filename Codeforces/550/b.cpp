// https://codeforces.com/contest/550/problem/B
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
typedef long long Long;

vector<int> problemset;

int bit_set_count (int n) {
  int bit_count = 0;
  while(n) {
    if (n & 1) bit_count++;
    n = n >> 1;
  }
  return bit_count;
}

int main () {
  int n, l, r, x;
  cin >> n >> l >> r >> x;

  for (int i = 0; i < n; i++) {
    int dum; cin >> dum;
    problemset.push_back(dum);
  }

  Long answer = 0;
  for (int mask = 0; mask <= (1 << n); mask++) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    Long sum_of_difficulties = 0;
    
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)) {
        mini = min(mini, problemset[i]);
        maxi = max(maxi, problemset[i]);
        sum_of_difficulties+= problemset[i];
      }
    }

    bool set_is_in_a_valid_range = sum_of_difficulties >= l && sum_of_difficulties <= r;
    if (bit_set_count(mask) > 1 && (maxi-mini) >= x && set_is_in_a_valid_range) {
      answer++;
    }
  }

  cout << answer << endl;
  return 0;
}