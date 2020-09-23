// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

Long get_sum(Long N) {
  return (N * (N+1)) / 2;
}

void brute_force_analyisis() {
  for (int i = 1; i <= 10; i++) {
    // is even
    Long sum = get_sum(i);
    if (!(sum & 1)) {
      cout << i << ": " << sum << endl;
    }
  }
}

void solve(Long N) {
  Long sum = get_sum(N);
  if (sum & 1) {
    cout << "NO" << endl;
  } else {
    vector<int> first,second;
    Long target = sum >>= 1;
    for(int i = N; i >= 1; i--) {
      if(target-i >= 0){
        first.push_back(i);
        target -= i;
      } else {
        second.push_back(i);
      }
    }

    cout << "YES" << endl;

    cout << first.size() << endl;
    for (auto element : first)
      cout << element << " ";
    
    cout << endl;
    cout << second.size() << endl;
    for (auto element : second)
      cout << element << " ";
  }
}

int main() {
  // brute_force_analyisis();

  // 1. Get the sum (S) of all numbers from 1 to N
  // 2. If S is multiple of 2 we can split the set into two subsets of equal sum
  // 3. Start selecting numbers until a "balance_sum" becomes equal to 0
  Long N;
  cin >> N;
  solve(N);
  return 0;
}
