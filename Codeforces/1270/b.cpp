// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
int const MAX_NUMBER = 2e9;
int const MIN_NUMBER = -1e9;

int main(){
  int T;
  cin >> T;
  while (T--) {
    int N;
    int pos_min = -1, pos_max = -1, mini, maxi;
    mini = MAX_NUMBER;
    maxi = MIN_NUMBER;

    cin >> N;
    bool found = false;
    vector<int> Numbers;
    for (int i = 0; i < N; i++){
      int dum; cin >> dum;
      Numbers.push_back(dum);
    }

    for(int i = 0; i < N; i++){
      for(int j = i+1; j < N; j++){
        if (Numbers[j]-Numbers[i] >= N) {
          // cout << "GRasa " << Numbers[j]-Numbers[i] << endl;
          found = true;
          pos_min = i + 1;
          pos_max = j + 1;
          break;
        }
      }
      if (found) break;
    }
    if (found) {
      cout << "YES" << endl;
      cout << pos_min << " " << pos_max << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}