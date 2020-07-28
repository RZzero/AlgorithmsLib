#include <iostream>
#include <vector>

using namespace std;

int main () {
  int N, Q;
  cin >> N;
  vector<int> numbers(N);
  vector<int> PS(N, 0);

  for (int i = 0; i < N; i++) {
    int dum; cin >> dum;
    numbers[i] = dum;
    if(i == 0) PS[i] = dum;
    else PS[i] = PS[i-1] + dum;
  }

  cin >> Q;

  for (int i = 0; i < Q; i++) {
    int L,R;
    cin >> L >> R;
    if (L == R) cout << numbers[L] << endl;
    else {
      if (L == 0) cout << PS[R] << endl;
      else cout << PS[R] - PS[L-1] << endl;
    }
  }
  return 0;
}