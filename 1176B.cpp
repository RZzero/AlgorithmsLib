#include <bits/stdc++.h>

using namespace std;

bool canForm3(int a, int b){
  int temp1 = a, temp2 = b;
  a = min(temp1,temp2);
  b = max(temp1,temp2);
  if (a % 10 == 2 && b%10 == 4) return true;
  if (a % 10 == 4 && b%10 == 5) return true;
  if (a % 10 == 3 && b%10 == 6) return true;
  return false;
}
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(0);
  
  int Q; cin >> Q;
  for(int i = 0; i < Q; i++){
    int N; cin >> N;
    vector<int> V(N);
    for (auto &l : V) cin >> l;
    int cnt = 0;
    for(int j = 0; j < V.size(); j++){
      for(int k = j+1; k < V.size(); k++){
        if (V[j] % 3 == 0) cnt++;
        else if (canForm3(V[j], V[k])) {
          V[k] = V[j] + V[k];
          V[j] = 0;
        }
      }
    }
    cout << "cnt " << cnt << endl;
    // if(V[N-1]%3 == 0) cnt++;
    int count_1 = 0;
    for(int j = 0; j < V.size(); j++){
      if(V[j] == 1) count_1++;
    }
    cout << count_1/3 + cnt << endl;
  }
  return 0;
}
