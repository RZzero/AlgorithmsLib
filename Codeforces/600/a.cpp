// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int T;
  cin >> T;
  while(T--){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (auto &a: A) cin >> a;
    for (auto &b: B) cin >> b;
    bool equal = true;
    vector<int> diff(N,0);

    int minDiff = 1e9;
    int maxDiff = -1e9;

    for(int i = 0; i < N; i++){
      int currentDiff = B[i]-A[i];
      diff[i] = currentDiff;
      minDiff = min(minDiff, currentDiff);
      maxDiff = max(maxDiff, currentDiff);
    }
    
    int L = 0, R = 0;
    for (int i = 0; i < N; i++){
      bool entered = false;
      while (A[i] != B[i] && i < N) {
        entered = true;
        A[i]+= maxDiff;
        i++;
      }
      if (entered) break;
    }

    for (int i = 0; i < N; i++) {
      if (A[i] != B[i]) {
        equal = false;
        break;
      }
    }

    if (maxDiff < 0) equal = false;
    if (equal) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}