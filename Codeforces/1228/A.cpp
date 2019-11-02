  #include <bits/stdc++.h>
  using namespace std;

  bool checkIfDifferent(int N) {
    int ARR[10] = {0};
    while (N > 0) {
      int d = N%10;
      ARR[d]++;
      N /= 10;
    }
    for(int i = 0; i < 10; i++){
      if (ARR[i] > 1) return false;
    }
    return true;
  }

  int main(){
    int L, R;
    cin >> L >> R;
    int N = -1;
    for(int i = L; i <= R; i++){
      if(checkIfDifferent(i)) {
        N = i;
        break;
      }
    }

    cout << N << endl;
    return 0;
  }
