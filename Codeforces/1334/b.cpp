#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int main () {
  int T;
  cin >> T;

  while(T--) {
    int n, x;
    cin >> n >> x;
    double X = x * 1.0;
    vector<int> wealth;
    for (int i = 0; i < n; i++){
      int dum;
      cin >> dum;
      wealth.push_back(dum);
    }

    sort(wealth.rbegin(), wealth.rend());

    vector<double> PS(n + 1, 0);
    for(int i = 0; i < wealth.size(); i++){
      PS[i+1] = PS[i] + wealth[i];
    }

    int answer = 0;
    for (int i = 1; i < PS.size(); i++){
      cout << "The calc " << PS[i]/i << endl;
      if (PS[i]/i >= X) {
        answer = max(answer, i);
      }
    }
    cout << answer << endl;
  }
  return 0;
} 