#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while(T--) {
    int N;
    cin >> N;
    vector<int> V(N+1);
    for(int i = 1; i <= N; i++){
      int dum; cin >> dum;
      V[i] = dum;
    }
    vector<int> componentItBelongsTo(N+1);
    vector<int> sizeOfComponent(N+1);
    vector<int> vis(N+1, 0);

    for(int i = 1; i <= N; i++){
      int cnt = 1;
      int current = V[i];

      if (vis[current]) continue;
      vis[current] = 1;

      while (current != i) {
        componentItBelongsTo[current] = i;
        current = V[current];
        vis[current] = 1;
        cnt++;
      }
      componentItBelongsTo[current] = i;

      if (cnt == 1) componentItBelongsTo[current] = i;
      sizeOfComponent[i] = cnt;
    }

    for(int i = 1; i <= N; i++){
      cout << sizeOfComponent[componentItBelongsTo[i]] << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
2 10 1 20
1 2 10 20

*/