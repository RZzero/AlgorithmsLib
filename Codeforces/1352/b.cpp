#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;
  while(T--) {
    int N, K;
    cin >> N >> K;
    
    int taken_positions = K-1;
    int missing = N-taken_positions;

    // Try Odd
    if (missing > 0 && missing % 2 == 1) {
      cout << "YES" << "\n";
      cout << missing << " ";
      for (int i = 0; i < taken_positions; i++)
        cout << 1 << " ";
      
      cout << "\n";
      continue;
    }
    
    taken_positions = (K-1) * 2;
    missing = N-taken_positions;
    if (missing > 0 && missing % 2 == 0) {
      cout << "YES" << "\n";
      cout << missing << " ";
      for (int i = 0; i < taken_positions/2; i++)
        cout << 2 << " ";
      
      cout << "\n";
    } else {
      cout << "NO" << "\n";
    }

  }
  return 0;
}
