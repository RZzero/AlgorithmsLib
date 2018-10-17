#include <bits/stdc++.h>
using namespace std;

// Count set bits without help of builtin functions
int countSetBits(int N) {
  if (N == 0)
    return 0;
  return (N & 1) + countSetBits(N >> 1);
}

int main() {
  int N, M, K, Ni;
  cin >> N >> M >> K;
  vector<int> V(M);

  for(auto &Vi: V) cin >> Vi;
  cin >> Ni;
  
  int friends = 0;

  for(auto &Vi : V){
    // XOR produces (1) if Ai /= in both X and Y
    if (countSetBits((Ni ^ Vi)) <= K) {
      friends++;
    }
  }

  cout << friends << endl;
  return 0;
}