#include <bits/stdc++.h>
using namespace std;
using Long = long long;

struct paint {
  Long type, number, color;
};

int main() {
  int H, W, M;
  cin >> H >> W >> M;
  vector<bool> rows(H + 1, false);
  vector<bool> columns(W + 1, false);
  map<int, Long> mapa;

  vector<paint> pincelazos;
  for (int i = 0; i < M; i++) {
    Long t, a, x;
    cin >> t >> a >> x;
    pincelazos.push_back({t, a, x});
  }

  Long painted_columns = 0;
  Long painted_rows = 0;
  Long painted_in_total = 0;
  reverse(pincelazos.begin(), pincelazos.end());

  for (int i = 0; i < M; i++) {
    auto [type, number, color] = pincelazos[i];
    if ((type == 1 && rows[number]) || (type == 2 && columns[number]))
      continue;
    if (painted_rows >= H || painted_columns >= W)
      continue;

    Long painted_cells = 0;
    if (type == 1) {
      rows[number] = 1;
      painted_cells = (W - painted_columns);
      painted_rows += 1;
    } else {
      columns[number] = 1;
      painted_cells = (H - painted_rows);
      painted_columns += 1;
    }
    if (painted_cells) {
      mapa[color] += painted_cells;
    }
    if (color != 0) {
      painted_in_total += painted_cells;
    }
    // break;
  }

  Long painted_for_zero = (H * W) - painted_in_total;
  if (painted_for_zero > 0) {
    mapa[0] = painted_for_zero;
  }
  cout << mapa.size() << endl;
  for (auto [color, count] : mapa) {
    cout << color << " " << count << endl;
  }
  return 0;
}