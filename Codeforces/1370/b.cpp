#include <iostream>
#include <vector>
using namespace std;

int main () {
  int N;
  int T;
  cin >> T;

  while (T--) {
    cin >> N;
    vector<pair<int,int>> odd;
    vector<pair<int,int>> even;
    vector<pair<int,int>> answer;

    for (int i = 0; i < 2 * N; i++) {
      int dum;
      cin >> dum;
      if (dum%2 == 0) even.push_back({ dum, i + 1});
      else odd.push_back({ dum, i + 1});
    }
    
    for (int i = 1; i < odd.size(); i += 2) {
      answer.push_back({ odd[i].second, odd[i-1].second });
    }
    for (int i = 1; i < even.size(); i += 2) {
      answer.push_back({ even[i].second, even[i-1].second });
    }

    for (int i = 0; i < N-1; i++) {
      cout << answer[i].first << " " << answer[i].second << endl;
    }
  }
  return 0;
}