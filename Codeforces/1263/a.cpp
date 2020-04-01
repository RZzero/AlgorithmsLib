#include </Users/rsuazo/bits/stdc++.h>
// #include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  while(N--){
    vector<long long> V;
    for (int i = 0; i < 3; i++){
      int dum; cin >> dum;
      V.push_back(dum);
    }
    sort(V.begin(), V.end());
    long long maxi = -1;
    do {
      cout << "V[0]: " << V[0] << endl;
      long long days = 0;
      long long forA = V[0]/2;
      long long forB = V[0] % 2 == 0 ? (V[0]/2) : ((V[0] + 1)/ 2);
      days = max(min(forA + V[1], V[2] + forB), min(forA + V[2], V[1] + forB));
      maxi = max(days, maxi);
    } while(next_permutation(V.begin(), V.end()));
    cout << maxi << endl;
    cout << endl << endl;
  }
}