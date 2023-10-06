#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N; cin >> N;
    vector<int> candies(N);

    for (auto &c: candies) cin >> c;

    int L = 0, R = N-1;
    int turns = 0, alice = 0, bob = 0, previous_bob = 0, previous_alice = 0;
    bool alice_turn = true;

    while (L <= R) {
      if (alice_turn) {
        previous_alice = 0;
        while (previous_alice <= previous_bob and L <= R) {
          previous_alice += candies[L];
          alice += candies[L];
          candies[L] = 0;
          L++;
        }
      } else {
        previous_bob = 0;
        while (previous_bob <= previous_alice and L <= R) {
          bob += candies[R];
          previous_bob += candies[R];
          candies[R] = 0;
          R--;
        }
      }
      alice_turn = !alice_turn;
      turns++;
    }

    cout << turns << " " << alice << " " << bob << "\n";
  }
  return 0;
}
