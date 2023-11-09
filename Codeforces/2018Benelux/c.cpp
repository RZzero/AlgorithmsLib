#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main () {
  Long N;
  cin >> N;
  
  auto get_surface = [](Long w, Long h, long l) -> Long {
    return 2 * (w*l + h*l + h*w);
  };
  
  for (int i = 1; i < 100; i++) {
    for (int j = 1; j < 100; j++) {
      for(int k = 1; k < 100; k++) {
        
      }
    }
  }
  return 0;
}