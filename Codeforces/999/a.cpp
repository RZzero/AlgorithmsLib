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
  int P, K;
  cin >> P >> K;

  vector<int> problems;
  vector<bool> mark(P, 0);

  for (int i = 0; i < P; i++) {
    int dum; cin >> dum;
    problems.push_back(dum);
  }

  bool ltr = true;
  for (int i = 0; i < P; i++) {
    if (problems[i] > K) {
      break;
    }
    mark[i] = true;
  }

  for (int i = P-1; i >= 0; i--) {
    if (problems[i] > K) {
      break;
    }
    mark[i] = true;
  }

  int answer = 0;
  for (int i = 0; i < P; i++)
    if (mark[i]) answer++;

  cout << answer << endl;
  return 0;
}
