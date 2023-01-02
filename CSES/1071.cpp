// https://cses.fi/problemset/task/1071
#include <iostream>

using namespace std;
typedef long long Long;

Long spiralComputation(Long &x, Long &y) {

  return 0;
}

int main() {
  ios_base::sync_with_stdio; cin.tie(0);
  
  int n;
  cin >> n;

  Long x,y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    cout << spiralComputation(x,y) << endl;
  }

  return 0;
}
