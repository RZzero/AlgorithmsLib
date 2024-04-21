#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    set<int> distincts;

    for (auto &n : numbers) {
      cin >> n;
      distincts.insert(n);
    }

    bool extra = N % 2 != distincts.size() % 2;

    cout << distincts.size() - extra << endl;
  }
  return 0;
}