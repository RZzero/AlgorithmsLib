#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<string> answers (N);

  for(auto &a: answers) cin >> a;

  vector<map<char,int>> values (M);

  for (int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      values[j][answers[i][j]]++;
    }
  }

  int sum = 0;
  for(int j = 0; j < M; j++) {
    int current;
    cin >> current;
    int better = 0;
    for(char c = 'A'; c <='E'; c++){
      cout << "El current char = " << c <<" ";
      better = max(better, values[j][c]);
    }
    cout << endl;
    sum += better * current;
  }

  cout << sum << endl;
  return 0;
}

/**
 * 
 * 
 

6
4 2 3 4 5 6
0 0 0 0 0 6

2 3 4 4 5 6
0 0 0 1 4

3 2 1
2 2 0
0 0 0
1 2 3
0 1 3
 */