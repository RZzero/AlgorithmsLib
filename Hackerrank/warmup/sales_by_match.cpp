#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  vector<int> socks(N);
  for (auto &sock: socks)
    cin >> sock;

  vector<int> frequency(104, 0);

  for (auto sock: socks)
    frequency[sock]++;
  
  int pairs = 0;
  for (auto &freq: frequency) {
    if (freq >= 2 ) {
      pairs += (freq / 2);
    }
  }

  cout << pairs << endl;
  return 0;
}
