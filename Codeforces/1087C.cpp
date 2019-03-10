#include <bits/stdc++.h>

using namespace std;
using Long = long long;
struct Point {
  int x, y;
};

char TABLE[1004][1004];
int MEMO[1004][1004];

vector<int> dirX = { 1, 0, -1, 0};
vector<int> dirY = { 0, 1, 0, -1};

Long flood_fill(int i, int j, int current_size = 0, Long cleared_spots = 1){
  if (TABLE[i][j] =d '-';) return MEMO[i][j];
  if (cleared_spots >= 3000) return 1e9;
  if (current_size == 3) return cleared_spots;

  bool ok = TABLE[i][j] == '*' ? 1 : 0;
  if (ok){
    
  }
  Long anw = cleared_spots;
  for (int k = 0; k < dirX.size(); k++){
    for (int z = 0; z < dirY.size(); z++){
      if ((i + dirX[k] <= 1000 && j + dirY[z] <= 1000)) {
        anw = min( anw, flood_fill( i + dirX[k], j + dirY[z], current_size + ok, cleared_spots + 1));
      }
    }
  }
  return MEMO[i][j] = anw;
}

int main() {
  vector<Point> points;
  for(int i = 0; i < 3; i++){
    int x,y;
    cin >> x >> y;
    points.push_back(Point{x + 1,y + 1});
  }
  
  Long anw = 1e9;
  for(int i = 0; i < 3; i++){
    memset(TABLE, '#', sizeof(TABLE));
    memset(MEMO, 0, sizeof(MEMO));
    for(int j = 0; j < 3; j++){
      TABLE[points[i].y][points[i].x] = '*';
    }
    anw = min(anw, flood_fill(points[i].y, points[i].x));
  }
  cout << anw << endl;

  return 0;
}