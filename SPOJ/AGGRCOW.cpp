#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &stalls, int &C, int &mid) {
  if (C > stalls.size()) return false;
  int assignedCows = 1;
  int currentStall = stalls[0];
  for(int i = 1; i < stalls.size(); i++) {
    // cout << "STALL " << stalls[i] << endl;
    if (stalls[i] - currentStall >= mid) {
      assignedCows++;
      currentStall = stalls[i];
      // cout << "current Mid " << mid << " Assigned cows " << assignedCows << endl;
      if (assignedCows == C) return true;
    }
  }
  return false;
}

int binarySearch(vector<int> &stalls, int &C) {
  int res = -1, lo = 1, hi = 1e9 + 7;
  while(lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (check(stalls, C, mid)) {
      lo = mid + 1;
      res = mid;
      // cout << mid << " YES" << endl;
    } else {
      hi = mid - 1;
      // cout << mid << " NO" << endl;
    }
  }
  return res;
}

int main(){
  int T, dum;

  scanf("%d", &T);
  while (T--){
    int N, C;
    scanf("%d%d", &N, &C);

    vector<int> A(N);
    for(int &t: A) scanf("%d", &t);
    sort(A.begin(), A.end());
    printf("%d\n", binarySearch(A, C));
  }
}