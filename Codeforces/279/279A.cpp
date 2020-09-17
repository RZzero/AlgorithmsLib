#include <bits/stdc++.h>

using namespace std;

bool check (int x, int y, int curX, int curY, int prevX, int prevY) {
  if (x == curX && ((y <= prevY && y >= curY) || (y <= curY && y >= prevY))) return 1;
  if (y == curY && ((x <= prevX && x >= curX) || (x <= curX && x >= prevX))) return 1;
  return 0;
}
int main(){
  int x,y;
  cin >> x >> y;
  int curLength = 0, curX = 0, curY = 0, cnt = 0, prevX = 0, prevY = 0;
  while(true){
    switch(cnt % 4){
      case 1:
        prevX = curX;
        prevY = curY;
        curX+= curLength;
        break;
      case 2:
        prevY = curY;
        prevX = curX;
        curY+= curLength;
        curLength++;
        break;
      case 3:
        prevX = curX;
        prevY = curY;
        curX-= curLength;
        break;
      case 0:
        prevY = curY;
        prevX = curX;
        curY-= curLength;
        curLength++;
        break;
    }
    if(x == 0 && y == 0) {
      cout << 0 << endl;
      break;
    }else if(check(x,y,curX,curY,prevX,prevY)){
      cout << cnt - 1<< endl;
      break;
    }
    cnt++;
    // cout << curX << " " << curY << endl;
  }

  return 0;
}

/*
0 1 => 2
*/