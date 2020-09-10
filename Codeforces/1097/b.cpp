// https://codeforces.com/contest/1097/problem/B
#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

typedef long long Long;
vector<int> angles;

int main () {
  int n; cin >> n;

  for (int i = 0; i < n; i++) {
    int dum; cin >> dum;
    angles.push_back(dum);
  }

  for (int mask = 0; mask <= (1 << n); mask++) {
    Long sum_of_this_sub_set = 0;
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)) sum_of_this_sub_set+= angles[i];
      else sum_of_this_sub_set-= angles[i];
    }

    if (sum_of_this_sub_set % 360 == 0) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}
