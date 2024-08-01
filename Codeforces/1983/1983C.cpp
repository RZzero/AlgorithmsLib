#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<vector<int>> orders;

void give_me_permutations() {

  vector<int> numbers = {0, 1, 2};
  do {
    orders.push_back(numbers);
  } while (next_permutation(numbers.begin(), numbers.end()));
}

// BEST ALGO EVER
// Suffix Sum
// Check order for permutations
// Take first slice of cake
// Binary search for second piece
// If found
// Binary search for third piece
void set_order(vector<int> &V, int index, int l, int r) {
  if (index == 0) {
    V[0] = l;
    V[1] = r;
  }
  if (index == 1) {
    V[2] = l;
    V[3] = r;
  }
  if (index == 2) {
    V[4] = l;
    V[5] = r;
  }
}
int main() {
  give_me_permutations();
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<Long> alice(N);
    vector<Long> bob(N);
    vector<Long> charlie(N);
    Long total = 0;
    for (auto &n : alice) {
      cin >> n;
      total += n;
    }

    for (auto &n : bob)
      cin >> n;
    for (auto &n : charlie)
      cin >> n;

    Long minimum_target = ceil((double)total / ((double)3.0 * 1.0));
    vector<vector<Long>> SS(3);
    // TODO: Clean this uglyness
    for (int i = 0; i < N; i++) {
      if (i == 0)
        SS[0].push_back(alice[i]);
      else
        SS[0].push_back(alice[i] + SS[0].back());
    }

    for (int i = 0; i < N; i++) {
      if (i == 0)
        SS[1].push_back(bob[i]);
      else
        SS[1].push_back(bob[i] + SS[1].back());
    }

    for (int i = 0; i < N; i++) {
      if (i == 0)
        SS[2].push_back(charlie[i]);
      else
        SS[2].push_back(charlie[i] + SS[2].back());
    }

    // for (int i = 0; i < 3; i++)
    //   SS[i].push_front(0);

    cout << minimum_target << endl;
    for (int i = 0; i < SS.size(); i++) {
      for (auto &el : SS[i]) {
        cout << el << " ";
      }
      cout << endl;
    }

    bool can = false;
    for (auto &my_order : orders) {
      vector<int> answer(6, 0);
      auto bs1 = lower_bound(SS[my_order[0]].begin(), SS[my_order[0]].end(), minimum_target);
      cout << "bs1 " << (bs1 - SS[my_order[0]].begin()) + 1 << endl;

      int second_starts = (bs1 - SS[my_order[0]].begin()) + 1;

      auto bs2 = lower_bound(SS[my_order[1]].begin() + second_starts, SS[my_order[1]].end(), minimum_target);

      if (bs2 == SS[my_order[1]].end())
        continue;
      cout << "AAAAAAA " << *bs2 - SS[my_order[1]][second_starts - 1] << endl;
      cout << "bs2 " << (bs2 - SS[my_order[1]].begin()) + 1 << endl;
      // cout << "bs2 " <<
      // can = true;
      break;
      if (can) {
        for (auto &n : answer) {
          cout << n << " ";
        }
        break;
      }
    }
    if (!can) {
      cout << -1 << endl;
    }
  }

  return 0;
}