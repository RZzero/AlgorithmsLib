#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N; cin >> N;
    vector<int> numbers;
    vector<int> answer(N);
    vector<int> answer2(N);
    for (int i = 0; i < N; i++) {
      int n; cin >> n;
      numbers.push_back(n);
    }
    sort(numbers.begin(), numbers.end());
    
    vector<int> numbers2 = numbers;

    for (int i = 1; i <= N; i++) {
      if (i % 2 != 0) {
        answer[i-1] = numbers.front();
        numbers.erase(numbers.begin());
      } else {
        answer[i-1] = numbers.back();
        numbers.pop_back();
      }
    }

    for (int i = 1; i <= N; i++) {
      if (i % 2 != 0) {
        answer2[i-1] = numbers2.back();
        numbers2.pop_back();
      } else {
        answer2[i-1] = numbers2.front();
        numbers2.erase(numbers2.begin());
      }
    }

    bool can = true;
    bool can2 = true;
    int should = answer[0] + answer[1];
    int should2 = answer2[0] + answer2[1];

    for (int i = 0; i < answer.size()-1; i++) {
      if (answer[i] + answer[i+1] != should)
        can = false;
    }

    for (int i = 0; i < answer2.size()-1; i++) {
      if (answer2[i] + answer2[i+1] != should2)
        can2 = false;
    }

    cout << ((can || can2) ? "YES" : "NO") << endl;
  }
  return 0;
}