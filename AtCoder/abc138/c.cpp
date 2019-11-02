#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<float> V (N);

  for(auto &l: V) cin >> l;
  sort(V.begin(), V.end());

  while (V.size() != 1) {
    int minimun_difference = 1e9 * 2;
    int current_index = -1;
    for (int i = 0; i < V.size()-1; i++){
      if ((V[i+1] - V[i]) < minimun_difference) {
        minimun_difference = V[i+1] - V[i];
        current_index = i;
      }
    }
    V[current_index] = (V[current_index+1]*1.0 + V[current_index]*1.0) / 2.0;
    // cout << V[current_index] << endl;
    // cout << "current state " << endl;
    // for(auto &l: V) cout << l << " ";
    V.erase(V.begin() + current_index+1);
    // cout << "after delete state " << endl;
    // for(auto &l: V) cout << l << " ";
  }

  cout << fixed << setprecision(9) << V[0] << endl;
  return 0;
}
