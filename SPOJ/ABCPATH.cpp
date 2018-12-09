#include <bits/stdc++.h>

using namespace std;

char TABLE[54][54];
int MEMO[54][54];

int H, W;
vector<int> dirX = { 1, 1, 0, -1, -1, -1, 0, 1 };
vector<int> dirY = { 0, 1, 1, 1, 0, -1, -1, -1 };

int flood_fill(int i, int j, int current_size = 1){
  if (MEMO[i][j]) return MEMO[i][j];

  int anw = current_size;
  for (int k = 0; k < dirX.size(); k++){
    for (int z = 0; z < dirY.size(); z++){
      if ((i + dirX[k] <= H && j + dirY[z] <= W)
        && (TABLE[i + dirX[k]][j + dirY[z]] == TABLE[i][j] + 1)) {
        anw = max( anw, flood_fill( i + dirX[k], j + dirY[z], current_size + 1));
      }
    }
  }

  return MEMO[i][j] = anw;
}

int main() {
  string s;
  H = W = 100;
  int c = 1;

  while (H!=0 && W!=0){
    cin >> H >> W;
    if(!H && !W) return 0;

    int anw = 0;
    for(int i = 0; i < H; i++){
      cin >> s;
      for(int j = 0; j < W; j++){
        TABLE[i+1][j+1] = s[j];
        MEMO[i+1][j+1] = 0;
      }
    }
    for (int i = 1; i <= H; i++){
      for (int j = 1; j <=W; j++){
        if (TABLE[i][j] == 'A')
          anw = max(anw, flood_fill(i,j));
      }
    }
    cout << "Case " << c << ": " << anw << endl;
    c++;
  }
  return 0;
}