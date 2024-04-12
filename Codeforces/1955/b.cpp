#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() { 
  int T;
  cin >> T;
  while (T--) {
    Long N, C, D;
    cin >> N >> C >> D;
    set<Long> from_input;
    vector<Long> solution;
    vector<Long> numbers;
    bool can = true;

    for (int i = 0; i < N*N; i++) {
      int cur; cin >> cur;
      numbers.push_back(cur);
      from_input.insert(cur);
    }

    sort(numbers.begin(), numbers.end());
    Long A = numbers[0];

    
    for (int i = 1; i <= N; i++) {
      Long current = A;
      solution.push_back(current);
      // cout << current << " ";
      for (int j = 2; j <= N; j++) {
        current += D;
        solution.push_back(current);

        // cout << current << " ";
      }
      // cout << endl;
      A += C;
    }

    sort(solution.begin(), solution.end());
    for (int i = 0; i < N*N; i++) {
      if (solution[i] != numbers[i]) {
        can = false;
        break;
      }
    }
    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}
/*
1
3 2 3
3 9 6 5 7 1 11 4 8
1
4 4 4
15 27 7 19 23 23 11 15 7 3 19 23 11 15 11 15
*/