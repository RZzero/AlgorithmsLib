#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> PS(N);
    vector<int> SS(N);
    vector<int> numbers;
    for (int i = 0; i < N; i++) {
      int n; cin >> n;
      numbers.push_back(n);
      PS[i] = i == 0 ? n : PS[i-1] + n;
    }
    
    for (int i = N-1; i >= 0; i--) {
      SS[i] = i == N-1 ? numbers[i] : numbers[i] + SS[i+1];
    }

    // for (auto n: PS) cout << n << " "; cout << endl;
    // for (auto n: SS) cout << n << " ";
    int maxi = 0;

    int L = 0;
    int R = N-1;

    while (L < R) {
      if (PS[L] > SS[R]) {
        R--;
      } else if (PS[L] < SS[R]) {
        L++;
      } else {
        maxi = L+1 + N-R;
        R--;
        L++;
      }
    }
    cout << maxi << endl;
  }
  return 0;
}

/*
1
9
7 3 20 5 15 1 11 8 10

*/