// https://codeforces.com/problemset/problem/1015/A
#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int N, M;
  cin >> N >> M;

  vector<bool> arr(M + 1, 0);

  for (int i = 0; i < N; i++) {
    int x,y;
    cin >> x >> y;
    for (int j = x; x <= y; x++) {
      arr[x] = true;
    }
  }

  vector<int> solution;

  for(int i = 1; i <= M; i++){
    if (!arr[i]) solution.push_back(i);
  }

  cout << solution.size() << endl;
  for (auto x: solution) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
