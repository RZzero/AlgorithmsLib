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

  int N, K;
  cin >> N >> K;

  vector<double> temp;
  for (int i = 0; i < N; i++) {
    double dum; cin >> dum;
    temp.push_back(dum);
  }

  vector<double> PS(N+1, 0);

  for (int i = 0; i < N; i++) {
    PS[i+1] = PS[i] + temp[i];
  }

  double answer = 0;
  for (int i = K; i < PS.size(); i++) {
    for (int j = 0; j + K < PS.size(); j++) {
      if (i-(K+j) < 0) break;
      answer = max(answer, (PS[i]-PS[i-(K+j)])/((double)(K+j)));
    }
  }

  cout << fixed << setprecision(15) << answer << endl;
  return 0;
}
