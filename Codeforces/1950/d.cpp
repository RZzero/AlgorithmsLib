#include <bits/stdc++.h>
using namespace std;
using Long = long long;
set<Long> binaries;
vector<Long> binary_decimals;

void gen_binary_up_to(int length, string current = "") {
  if (length == 0) {
    binaries.insert(stoi(current));
    return;
  }
  gen_binary_up_to(length - 1, current + '1');
  gen_binary_up_to(length - 1, current + '0');
}

int only_decimals(Long n) {
  for (int i = 2; i < binary_decimals.size() && binary_decimals[i] <= n; i++) {
    while (n % binary_decimals[i] == 0) {
      n /= binary_decimals[i];
    }
  }
  return n;
}

int main() {
  gen_binary_up_to(7);
  for (auto &l : binaries) {
    binary_decimals.push_back(l);
  }

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;

    if (binaries.count(N) || only_decimals(N) == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}