#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, K, sum = 0;
  vector<pair<int,int>> problemsPair;
  bool table[2004] = {false};
  cin >> N >> K;

  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    problemsPair.push_back({dum, i});
  }

  sort(problemsPair.rbegin(), problemsPair.rend());

  for(int i = 0; i < K; i++){
    table[problemsPair[i].second] = true;
    sum+= problemsPair[i].first;
  }

  int cnt = 0;
  vector<int> solution;
  for(int i = 0; i < N; i++){
    cnt++;
    if(table[i]){
      if(K - solution.size() > 1){
        solution.push_back(cnt);
        cnt = 0;
      }
    }
  }

  if(solution.size() != K) solution.push_back(cnt);
  cout << sum << endl;
  for(int i = 0; i < solution.size(); i++){
    cout << solution[i] << " ";
  }
  return 0;
}