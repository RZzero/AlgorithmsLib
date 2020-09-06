// https://codeforces.com/problemset/problem/1102/D
#include <iostream>

using namespace std;
// TODO: Refactor & fix

int main () {
  int N; cin >> N;
  string S; cin >> S;
  int count0,count1,count2;
  count0 = count2 = count1 = 0;
  int target = N /3;

  for (int i = 0; i < N; i++) {
    if (S[i] == '1') {
      count1++;
    } else if (S[i] == '2') {
      count2++;
    } else {
      count0++;
    }
  }

  if (count0 == target && count1 == target && count2 == target) {
    cout << S << endl;
    return 0;
  }

  for (int i = N-1; i >= 0; i--) {
    if (count0 > target && S[i] == '0') {
      if (count2 < target) {
        S[i] = '2';
        count2++;
        count0--;
      } else if (count1 < target) {
        S[i] = '1';
        count1++;
        count0--;
      }
    } else if (count1 > target && S[i] =='1') {
      if (count2 < target) {
        S[i] = '2';
        count2++;
        count1--;
      } else if (count0 < target) {
        S[i] = '0';
        count0++;
        count1--;
      }
    } else if (count2 > target && S[i] =='2') {
      if (count1 < target) {
        S[i] = '1';
        count1++;
        count2--;
      } else if (count0 < target) {
        S[i] = '0';
        count0++;
        count2--;
      }
    }
  }
  cout << S << endl;
  return 0;
}