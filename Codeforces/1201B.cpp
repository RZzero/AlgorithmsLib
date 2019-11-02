#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
  int N;
  cin >> N;
  vector<int> V (N);

  Long sum = 0;
  for(auto &l: V) {
    cin >> l;
    sum+= l;
  }

  sort(V.rbegin(), V.rend());

  if (sum%2 != 0 || V[0] > sum-V[0])
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  

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