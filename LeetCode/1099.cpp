#include <bits/stdc++.h>

using namespace std;

int twoSumLessThanK(vector<int>& A, int &K) {
  int answer = -1;
  sort(A.begin(), A.end());

  for (int i = 0; i < A.size(); i++) {
    int L = i+1, R = A.size()-1;
    while(L < R) {
      int mid = L + (R - L) / 2;
      int current = A[mid] + A[i];
      if (current < K) {
        if (current > answer) {
          answer = A[mid] + A[i];
        }
        L++;
      } else {
        R--;
      }
    }
  }

  return answer;
}

int main() {
  vector<int> A = {10,20,30};
  int K = 15;
  cout << twoSumLessThanK(A, K) << endl;
  return 0;
}
