#include <bits/stdc++.h>
using namespace std;
vector<int> dirX = {1, 0, -1, 0};
vector<int> dirY = {0, -1, 0, 1};

int main() {
  int N;
  string S;
  cin >> N >> S;
  int x = 0, y = 0;
  int currentDir = 0;

  for (auto &s : S) {
    if (s == 'S') {
      x += dirX[currentDir % 4];
      y += dirY[currentDir % 4];
    } else {
      currentDir++;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}