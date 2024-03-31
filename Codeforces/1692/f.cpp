#include <bits/stdc++.h>
using namespace std;

set<string> ways_to_3;
void get_ways_to_3() {
  vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < digits.size(); i++) {
    for (int j = 0; j < digits.size(); j++) {
      for (int k = 0; k < digits.size(); k++) {
        if ((digits[i] + digits[j] + digits[k]) % 10 == 3) {
          string valid_way = to_string(digits[i]) + to_string(digits[j]) + to_string(digits[k]);
          sort(valid_way.begin(), valid_way.end());
          ways_to_3.insert(valid_way);
        }
      }
    }
  }
}

int main() {
  get_ways_to_3();
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;
    vector<int> numbers(N);
    vector<int> digit_frequency(10, 0);
    for (auto &n : numbers) {
      cin >> n;
      digit_frequency[n % 10]++;
    }
    bool can = false;

    for (auto &valid_pattern : ways_to_3) {
      vector<int> freq_current(10, 0);

      for (int i = 0; i < valid_pattern.size(); i++) {
        freq_current[valid_pattern[i] - '0']++;
      }

      int matching = 0;
      for (int i = 0; i < freq_current.size(); i++) {
        if (freq_current[i] && digit_frequency[i] >= freq_current[i]) {
          matching += freq_current[i];
        }
      }

      if (matching >= 3) {
        can = true;
        break;
      }
    }

    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}