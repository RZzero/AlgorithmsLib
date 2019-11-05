#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;
using Long = long long;
int main() {
  int T;
  cin >> T;

  while(T--) {
    int N;
    cin >> N;
    vector<int> located(N+1, 0);
    vector<int> original(N+1, 0);
    vector<int> vis(N+1, 0);

    int dum;
    for(int i = 1; i <= N; i++){
      cin >> dum;
      original[i] = dum;
      located[dum] = i;
    }

    for(int i = 1; i <= N; i++){
      int startingPos = located[i];
      for (int j = startingPos; j > 1; j--) {
        if (vis[j-1]) continue;
        if (i < original[j-1]) {
          int tmp = original[j-1];
          original[j-1] = i;
          original[j] = tmp;

          located[i] = j-1;
          located[tmp] = j;
          vis[j-1] = 1;
        } 
      }
    }
    for(int i = 1; i <=N; i++){
      cout << original[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
