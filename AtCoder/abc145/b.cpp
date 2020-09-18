#include <iostream>

using namespace std;

int main () {
  string S;
  int N;
  cin >> N >> S;


  if (N & 1) {
    cout << "No" << endl;
  } else {
    bool can = true;
    for (int i = 0, j = N /2; i < N/2 && j < N; j++,i++) {
      if (S[i] != S[j]) can = false;
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
