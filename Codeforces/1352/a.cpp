#include <bits/stdc++.h>

using namespace std;

vector<int> get_round_summand(int N) {
  vector<int> summand;

  for (int i = 10, current_number = N;
    i <= 1e6 && current_number > 0; i *= 10) {

    if (current_number%i != 0) {
      summand.push_back(current_number%i);
      current_number = current_number - (current_number%i);
    } else if ((current_number - (current_number%i)) == 0) {
      summand.push_back(current_number%i);
    }
  }

  return summand;
}

int main () {
  int T;
  cin >> T;
  while(T--) {
    int N; cin >> N;

    vector<int> summand = get_round_summand(N);
    cout << summand.size() << "\n";
    for (auto &s: summand) {
      cout << s << " ";
    }
    cout << '\n';
  }
  return 0;
}