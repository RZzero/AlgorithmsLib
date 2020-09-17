#include <bits/stdc++.h>

using namespace std;

int main () {
  int N, dum;
  cin >> N;
  vector<int> trees;
  for(int i = 0; i < N; i++){
    cin >> dum;
    trees.push_back(dum);
  }

  int sum = N-1;
  for(int i = 0; i < N; i++){
    if (i == 0){
      sum+= trees[i] + 1;
    } else if (trees[i-1] < trees[i]) {
      sum+= trees[i] - trees[i-1] + 1;
    } else if (trees[i-1] > trees[i]) {
      sum+= trees[i-1] - trees[i] + 1;
    } else {
      sum+= 1;
    }
  }
  cout << sum << endl;
  return 0;
}