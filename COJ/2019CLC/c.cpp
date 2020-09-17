#include <bits/stdc++.h>
using namespace std;
int N, M;

struct circle {
  char u, r, d, l;
  void toString () {
    cout << "u: " << u << " r: " << r << " d: " << d << " l: " << l << endl;
  }
};

circle rotate(circle c) {
  char temp = c.u;
  c.u = c.l;
  c.l = c.d;
  c.d = c.r;
  c.r = temp;
  return c;
}

bool checkIfMatchesOnTheLeft(circle from, circle dest) {
  if (from.r == dest.l) return true;
  return false;
}

circle rotateToMatch(circle target, circle current) {
  int i = 0;
  while (!checkIfMatchesOnTheLeft(target, current) && i < 4) {
    current = rotate(current);
    i++;
  }
  return current;
}

bool checkIfMatchesUp(circle from, circle dest) {
  if (from.d == dest.u) return true;
  return false;
}

int main (){
  vector<vector<circle>> V(10);
  cin >> N >> M;
  int answer = 0;
  for (int i = 0; i < N; i++){
    for(int j = 0; j < M; j++) {
      char u, r, d, l;
      cin >> u >> r >> d >> l;
      V[i].push_back({ u, r, d , l });
    }
  }

  int cnt = 0;
  for (int k = 0; k < 4; k++) {
    bool can = true;

    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        cnt++;
        if (i == 0 && j == 0) continue;
        else if (i == 0 && j > 0) {
          V[i][j] = rotateToMatch(V[i][j-1], V[i][j]);
        } else if(i > 0 && j == 0){
          if (!checkIfMatchesUp(V[i][j], V[i-1][j])) can = false;
        } else if(i > 0 && j > 0){
          V[i][j] = rotateToMatch(V[i][j-1], V[i][j]);
          if (!checkIfMatchesUp(V[i][j], V[i-1][j])) can = false;
        }
      }
      if (!can) break;
    }
    if (can) answer++;
    V[0][0] = rotate(V[0][0]);
  }

  cout << answer << endl;
  return 0 ;
}

/*
2 2
r b k g r b k g
r b k g k g r b

*/