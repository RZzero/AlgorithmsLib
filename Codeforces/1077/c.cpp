// https://codeforces.com/problemset/problem/1077/C
#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
using namespace std;
using Long = long long;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int N;
  Long sum = 0;
  map<int,vector<int>> positions;
  set<int> seto;
  vector<int> numbers;

  cin >> N;
  for (int i = 0; i < N; i++) {
    int dumbo; cin >> dumbo;
    numbers.push_back(dumbo);
    positions[dumbo].push_back(i+1);
    sum+= dumbo;
  }

  vector<int> answer;
  for (int i = 0; i < numbers.size(); i++) {
    Long preProcess = sum - (Long)numbers[i];
    if (preProcess % 2 != 0 || preProcess == 0) continue;
    if (!(preProcess/2 > 0) || preProcess/2 > 1e6) continue;
    if (numbers[i] == preProcess/2 && positions[numbers[i]].size() == 1) continue;
    if (positions.count(preProcess/2) && positions.count(numbers[i]) && !seto.count(numbers[i]) && !seto.count(preProcess)) {
      for (int j = 0; j < positions[numbers[i]].size(); j++) {
        answer.push_back(positions[numbers[i]][j]);
      }
      seto.insert(numbers[i]);
      seto.insert(preProcess);
    }
  }

  cout << answer.size() << endl;
  for (auto &a: answer) cout << a << " ";
  return 0;
}
