#include <iostream>
#include <vector>
using namespace std;
typedef long long Long;
 
int main() {
  int layers_cnt, bottles_cnt;
 
  cin >> layers_cnt >> bottles_cnt;
 
  vector<int> layers;
  vector<int> bottles;
 
  for (int i = 0; i < layers_cnt; i++) {
    int dum; cin >> dum;
    layers.push_back(dum);
  }
 
  for (int i = 0; i < bottles_cnt; i++) {
    int dum; cin >> dum;
    bottles.push_back(dum);
  }
 
  vector<Long> PS(layers.size());
 
  for (int i = 0; i < layers.size(); i++){
    if (i == 0) PS[0] = (Long)layers[0];
    else PS[i] = PS[i-1] + (Long)layers[i];
  }
 
  for (int i = 0; i < bottles.size(); i++) {
    auto ans = lower_bound(PS.begin(), PS.end(), (Long)bottles[i]);
 

    if (*ans == bottles[i]) {
      cout << ans-PS.begin()+1 << endl;
    } else {
      cout << ans-PS.begin() << endl;
    }
  }
  return 0;
}