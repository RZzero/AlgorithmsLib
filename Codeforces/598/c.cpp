#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;
using Long = long long;
int main() {
  int T;
  cin >> T;

  while(T--) {
    string S;
    int N, K;
    cin >> N >> K >> S;
    vector<int> zeroes;
    for(int i = 0; i < N; i++){
      if (S[i] == '0') zeroes.push_back(i);
    }

    if (K >= N) {
      // Cout sort this
    }
  }
  return 0;
}
