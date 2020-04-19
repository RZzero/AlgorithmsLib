#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (i == 0 && j == 0) {
          cout << "W";
        } else {
          cout << "B";
        }
      }
      cout << endl;
    }
  }
  return 0;
}

/*
1 5 3 2 8
*/