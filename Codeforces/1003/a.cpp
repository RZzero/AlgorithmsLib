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

  vector<int> frq(101, 0);
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int dum;
    cin >> dum;
    frq[dum]++;
  }

  int answer = 0;

  for (int i = 0; i < frq.size(); i++) {
    answer = max(answer, frq[i]);
  }

  cout << answer << endl;
  return 0;
}
