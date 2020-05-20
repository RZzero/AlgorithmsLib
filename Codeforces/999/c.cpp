#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;



int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int N, K;
  string S;
  cin >> N >> K >> S;

  vector<vector<int>> positions(26);
  vector<bool> marked_as_deleted(S.size(), false);
  vector<int> times_accessed(26, 0);

  for (int i = 0; i < S.size(); i++) {
    positions[S[i]-'a'].push_back(i);
  }

  for (int i = 0; i < K; i++) {
    for (char letter = 'a'; letter <= 'z'; letter += 1) {
      int current = letter-'a';
      if (positions[current].size()) {
        if (times_accessed[current] < positions[current].size()
          && !marked_as_deleted[positions[current][times_accessed[current]]]) {
            marked_as_deleted[positions[current][times_accessed[current]]] = true;
            times_accessed[current]++;
            break;
          }
      }
    }
  }

  string answer = "";

  for (int i = 0; i < S.size(); i++) {
    if (marked_as_deleted[i]) continue;
    answer+= S[i];
  }

  cout << answer << endl;
  return 0;
}
