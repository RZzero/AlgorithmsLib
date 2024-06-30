#include <bits/stdc++.h>
using namespace std;

void build_grid_for_level_X(int i, int j) {
  // Coje la mitad
  // ponle N-1 * N-1 Puntos
}

void build_carpet(int N, vector<string> &table) {
  for (int i = 0; i < 3; i++) {
    for (int z = 0; z < 3; z++) {
      int powered = pow(3, N);
      int length = pow(3, N - 1);

      if (i == 1 && z == 1) {
        int initial_i = powered / 3;

        for (int j = initial_i; j < initial_i * 2; j++) {
          for (int k = initial_i; k < initial_i * 2; k++) {
            table[j][k] = '.';
          }
        }
      } else {
        int length2 = pow(3, N - 2);
        for (int j = (i * length); j < ((i * length) + length) + length / 3; j++) {
          for (int k = (z * length); k < ((z * length) + length) + length / 3; k++) {
            cout << j << " " << k << endl;
            // table[j][k] = '.';
          }
        }
      }
    }
  }
}

int main() {
  int N;
  cin >> N;

  int powered = pow(3, N);
  vector<string> table(powered);

  for (int i = 0; i < powered; i++) {
    string new_str = "";
    for (int j = 0; j < powered; j++) {
      new_str += '#';
    }
    table[i] = new_str;
  }

  if (N == 0) {
    cout << "#" << endl;
    return 0;
  } else {
    build_carpet(N, table);
  }

  for (int i = 0; i < table.size(); i++) {
    for (int j = 0; j < table[i].size(); j++) {
      cout << table[i][j];
    }
    cout << endl;
  }
  return 0;
}
/*
### ### ###
#.# #.# #.#
### ### ###

### ... ###
#.# ... #.#
### ... ###

### ### ###
#.# #.# #.#
### ### ###
*/
