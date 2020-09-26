// https://onlinejudge.org/external/1/119.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int N;

  int cnt = 0;
  while (cin >> N) {
    map<string, int> balance;
    vector<string> people_order;
    for (int i = 1; i <= N; i++) {
      string p; cin >> p;
      balance[p] = 0;
      people_order.push_back(p);
    }

    for (int i = 1; i <= N; i++) {
      string person, reciever;
      int amount, gifts_to;
      cin >> person;
      cin >> amount >> gifts_to;

      if (!gifts_to) continue;

      balance[person] = balance[person]-amount + amount%gifts_to;
      for (int j = 1; j <= gifts_to; j++) {
        string p; cin >> p;
        balance[p] += amount/gifts_to;
      }
    }

    if (cnt > 0) cout << endl;
    cnt++;
    for (auto &p: people_order) {
      cout << p << " " << balance[p] << endl;
    }
  }
  return 0;
}
