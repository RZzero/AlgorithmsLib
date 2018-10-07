#include <bits/stdc++.h>
using namespace std;

int rook(int r1, int c1, int r2, int c2){
  if(r1 == r2 || c1 == c2) return 1;
  else return 2;
}

int bishop(int r1, int c1, int r2, int c2){
  if((r1 + c1) % 2 != (r2 + c2) % 2) return 0;
  //Moved the same distance (as if started from origin)
  if(abs(r1-r2) == abs(c1-c2)) return 1;
  else return 2;
}
int king(int r1, int c1, int r2, int c2){
  //DROGA
  return max(abs(c1-c2),abs(r1-r2));
}

int main(){
  int r1,c1,r2,c2;
  cin >> r1 >> c1 >> r2 >> c2;
  cout << rook(r1,c1,r2,c2) << " " << bishop(r1,c1,r2,c2) << " " << king(r1,c1,r2,c2) << endl;
  return 0;
}