#include <bits/stdc++.h>

using namespace std;

int main () {
  int s,t,a,b,m,n;
  cin >> s >> t >> a >> b >> m >> n;
  vector<int> apples(m);
  vector<int> oranges(n);

  for (auto &apple: apples) cin >> apple;
  for (auto &orange: oranges) cin >> orange;

  int apples_in_range = 0;
  int oranges_in_range = 0;
  for (auto &apple: apples) {
    int current = apple + a;
    if (current >= s && current <= t)
      apples_in_range++;
  }

  for (auto &orange: oranges) {
    int current = orange + b;
    if (current >= s && current <= t)
      oranges_in_range++;
  }
  cout << apples_in_range << endl;
  cout << oranges_in_range << endl;
  return 0;
}
