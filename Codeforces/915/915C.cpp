#include <bits/stdc++.h>
using namespace std;

// TODO: Complete greedy solution
string solve_greedy(string S, string T) {
  string to_use = S;
  sort(to_use.begin(), to_use.end());
  reverse(to_use.begin(), to_use.end());

  // if (T.size() != S.size() || S == T) {
  //   cout << to_use << endl;
  //   return;
  // }

  string answer = "";
  bool menor = false;
  while (to_use.size()) {
    int idx = 0;
    // bool to_use_idx = answer.size() == 0
    while (to_use[idx] > T.front() && idx < to_use.size()) {
      // cerr << "to_use[idx]: " << to_use[idx] << " " << "T[(int)answer.size()]: " << T[(int)answer.size()] << endl;
      idx++;
    }
    // cerr << idx << endl;
    if (idx >= to_use.size())
      idx--;

    menor = to_use[idx] < T.front();
    answer += to_use[idx];
    cerr << "current: -> " << answer << " to_used: " << to_use << endl;
    // cerr << "current: -> " << anto_use << " used: " << to_use[idx] << " for front: " << T.front() << endl;
    T.erase(T.begin() + 0);
    to_use.erase(to_use.begin() + idx);
    if (menor)
      break;
  }

  if (menor) {
    answer += to_use;
  }
  return answer;
}

void solve() {
  string S, T;
  cin >> S >> T;

  string to_use = S;
  sort(to_use.begin(), to_use.end());
  reverse(to_use.begin(), to_use.end());

  if (T.size() != S.size() || S == T) {
    cout << to_use << endl;
    return;
  }

  string answer = "";
  // bool menor = false;
  // while (to_use.size()) {
  //   int idx = 0;
  //   // bool to_use_idx = answer.size() == 0
  //   while (to_use[idx] > T.front() && idx < to_use.size()) {
  //     // cerr << "to_use[idx]: " << to_use[idx] << " " << "T[(int)answer.size()]: " << T[(int)answer.size()] << endl;
  //     idx++;
  //   }
  //   // cerr << idx << endl;
  //   if (idx >= to_use.size())
  //     idx--;

  //   // If it has become greater, search for other instead?
  //   menor = to_use[idx] < T.front();
  //   answer += to_use[idx];

  //   cerr << "current: -> " << answer << " to_used: " << to_use << endl;
  //   // cerr << "current: -> " << anto_use << " used: " << to_use[idx] << " for front: " << T.front() << endl;
  //   T.erase(T.begin() + 0);
  //   to_use.erase(to_use.begin() + idx);
  //   if (menor)
  //     break;
  // }

  // if (menor) {
  //   answer += to_use;
  // }
  cout << answer << endl;
}
int main() {
  int T;
  // cin >> T;
  T = 1;
  while (T--) {
    solve();
  }
  return 0;
}