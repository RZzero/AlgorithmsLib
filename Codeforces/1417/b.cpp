// https://codeforces.com/problemset/problem/1417/B
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

bool comparator(pair<int,pair<int,int>> &x, pair<int,pair<int,int>> &y) {
  return x.second.first < y.second.first;
}

int main () {
  int K;
  cin >> K;

  while (K--) {
    int N, T;
    cin >> N >> T;
    vector<pair<int,pair<int,int>>> numbers;
    vector<int> state(N, -1);
    for (int i = 0; i < N; i++) {
      int dum; cin >> dum;
      // value, position, state
      numbers.push_back({dum, { i ,-1 }});
    }

    sort(numbers.begin(), numbers.end());
    
    // State
    // -1 - Not taken
    // 0 - White
    // 1 - Black

    for (int i = 0; i < numbers.size(); i++) {
      if (state[i] != -1 || numbers[i].first >= T) continue;
      Long res = -1, lo = 0, hi = numbers.size()-1;
      Long best_diff = INT_MAX;
      while (lo <= hi) {
        Long mid = lo + (hi - lo) / 2;
        Long this_diff = abs(numbers[mid].first-T);
        // if (i == 0) cout << "cn " << this_diff << endl;
        if (mid != i && state[mid] == -1 && this_diff < best_diff) {
          res = mid;
          best_diff = this_diff;  
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      }

      if (res != -1 && (numbers[i].first + numbers[res].first <= T)) {
        // cout << "Best for " << numbers[i].first << " is " << numbers[res].first << endl;
        state[i] = 0;
        state[res] = 1;
      }
    }

    int q = 0;
    int w = state.size()-1;
    bool current_color = false;
    while(q <= w) {
      while (q <= w && state[q] != -1) q++;
      if (q <= w && state[q] == -1) {
        if (numbers[q].first > T) {
          state[q] = false;
          continue;
        }
        state[q] = current_color;
        current_color = !current_color;
      }
      while (w > q && state[w] != -1) w--;
      if (w > q && state[q] == -1) {
        if (numbers[w].first > T) {
          state[q] = false;
          continue;
        }
        state[w] = current_color;
        current_color = !current_color;
      }
    }

    for (int i = 0; i < state.size(); i++) {
      numbers[i].second.second = state[i];
    }

    sort(numbers.begin(), numbers.end(), comparator);
    for (int i = 0; i < numbers.size(); i++) {
      cout << numbers[i].second.second << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
1
6 7
1 2 3 4 5 6
*/