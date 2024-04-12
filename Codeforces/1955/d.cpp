#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> A(N);
    vector<int> B(M);
    map<int, int> for_good;
    map<int, int> for_check;

    for (auto &n : A) {
      cin >> n;
      for_check[n] = 0;
      for_good[n] = 0;
    }
    for (auto &n : B) {
      cin >> n;
      for_good[n]++;
    }

    Long answer = 0;

    int currently_matched = 0;
    for (int i = 0; i < B.size(); i++) {
      for_check[A[i]]++;
      if (for_good[A[i]] > 0) {
        if (for_check[A[i]] <= for_good[A[i]]) {
          currently_matched++;
        }
      }
    }

    answer += currently_matched >= K;
    for (int L = 1, R = M; R < A.size(); L++, R++) {
      // Delete one in pos L-1
      if (for_check[A[L - 1]] > 0) {
        if (for_good[A[L - 1]] > 0 && for_check[A[L - 1]] == for_good[A[L - 1]]) {
          currently_matched--;
        }
        for_check[A[L - 1]]--;
      }

      for_check[A[R]]++;
      if (for_good[A[R]] > 0 && for_check[A[R]] <= for_good[A[R]]) {
        currently_matched++;
      }

      if (currently_matched >= K) {
        answer++;
      }
    }

    cout << answer << endl;
  }
  return 0;
}

/*
1
7 4 2
4 1 2 3 4 5 6
1 2 3 4

1
11 5 3
9 9 2 2 10 9 7 6 3 6 3
6 9 7 8 10
*/