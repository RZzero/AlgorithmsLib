// https://codeforces.com/contest/1869/problem/A
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int N; cin >> N;
    vector<int> numbers(N);
    for (auto &n: numbers) cin >> n;

    if (N&1) {
      cout << 4 << endl;
      cout << 1 << " " << N << endl;
      cout << 1 << " " << N-1 << endl;
      cout << N-1 << " " << N << endl;
      cout << N-1 << " " << N << endl;
    } else {
      cout << 2 << endl;
      cout << 1 << " " << N << endl; 
      cout << 1 << " " << N << endl; 
    }
  }
  return 0;
}

/*
1
8
3 1 4 1 5 9 2 6


*/