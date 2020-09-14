   
#include <iostream>
using namespace std;

int bitRemoval(int x, int y) {
  int cp_x = x;
  int cp_y = y;
  
  for (int i = 0; cp_x > 0; i++){
    if ((cp_x & 1) && (cp_y & 1)) {
      x ^= (1 << i);
    }

    cp_x >>= 1;
    cp_y >>= 1;
  }
  
  return x;
}
   
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; ++i) {
    int x, y;
    cin >> x >> y;
    cout << bitRemoval(x, y) << "\n";
  }
  return 0;
}
