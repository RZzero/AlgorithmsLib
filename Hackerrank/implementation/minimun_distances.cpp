#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int, pair<int,int>> appereances;

  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;
  
  int answer = INT_MAX;
  for (int i = 0; i < numbers.size(); i++) {
    int current_number = numbers[i];
    if (!appereances.count(current_number)) {
      appereances[current_number] = {i, -1};
    } else {
      appereances[current_number] = {i, appereances[current_number].first};
      answer = min(answer, appereances[current_number].first - appereances[current_number].second);
    }
  }

  if (answer == INT_MAX) {
    cout << -1 << endl;
  } else {
    cout << answer << endl;
  }
  return 0;
}
