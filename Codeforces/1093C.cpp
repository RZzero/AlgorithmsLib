#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;
  Long ANSWER[100000 * 2];
  vector<Long> V;  

  for(int i = 0; i < N / 2; i++){
    Long dum;
    cin >> dum;
    V.push_back(dum);
  }

  int asd = 0;
  Long ri = -1;
  Long li = 0;
  for(int i = 0; i < N / 2; i++){
    if(i == 0){
      ANSWER[i] = 0;
      ANSWER[N-i-1] = V[i]; 
      ri = max(ri, V[i]);
    }else {
      if (V[i] > ri){
        ANSWER[i] = V[i] - ri;
        ANSWER[N-i-1] = V[i] - (V[i] - ri);
        ri = V[i] - (V[i] - ri); 
        li = ANSWER[i];
      }else {
        if (V[i]) {

        }
        ANSWER[i] = 0;
        ANSWER[N-i-1] = V[i]; 
      }
    }
  }

  for(int i = 0; i < N; i++){
    cout << ANSWER[i] << " ";
  }
  cout << endl;

  return 0;
}
