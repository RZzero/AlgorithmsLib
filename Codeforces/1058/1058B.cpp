#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define EPS (1e-10)
struct Point{
  int x,y;
};

float area(Point A, Point B, Point C) {
  return abs(( (A.x * 1.0 * (B.y - C.y)) + (B.x * 1.0 * (C.y - A.y)) + (C.x * 1.0 * (A.y - B.y)))/2.0);
}

bool insideTriangle(Point A, Point B, Point C, Point G){
  float Original = area(A,B,C);
  float A1 = area(A,B,G);
  float A2 = area(A,C,G);
  float A3 = area(B,C,G);
//   cout << "Original " << Original << endl;
//   cout << "TOTAL " << A1 + A2 + A3 << endl;
  return abs(Original - (A1 + A2 + A3)) < EPS;
}

int main(){
  int d,n, M;
  cin >> n >> d;
  cin >> M;
  vector<Point> hopers;

  for(int i = 0; i < M; i++){
    int x,y; cin >> x >> y;
    hopers.push_back({x,y});
  }
  Point A = Point({0,d});
  Point B = Point({d,0});
  Point C = Point({n,n-d});
  Point D = Point({n-d,n});

  int cnt = 0;
  for(Point &G: hopers){
    //Calculate area of ABC
    //Calculate area of CBD
    bool isInsideFirst = insideTriangle(A,B,C,G);
    bool isInsideSecond = insideTriangle(A,C,D,G);
    if(isInsideFirst || isInsideSecond) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    // cout << endl;
  }
//   cout << cnt << endl;

  return 0;
}