// https://atcoder.jp/contests/abc346/tasks/abc346_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, B;
  cin >> W >> B;
  string piano_keys = "wbwbwwbwbwbw";
  // initial_count
  // W = 7
  // B = 5
  string pseudo_infinite = "";
  for (int i = 0; i < 20; i++) {
    pseudo_infinite += piano_keys;
  }

  int current_w, current_b;
  bool can = false;
  for (int i = 0; i < pseudo_infinite.size(); i++) {
    current_w = current_b = 0;
    for (int j = i; j < pseudo_infinite.size(); j++) {
      if (pseudo_infinite[j] == 'w')
        current_w++;
      if (pseudo_infinite[j] == 'b')
        current_b++;
      if (current_w > W || current_b > B)
        break;

      if (current_w == W && current_b == B) {
        can = true;
        break;
      }
    }
    if (can)
      break;
  }

  cout << (can ? "Yes" : "No") << endl;
  return 0;
}