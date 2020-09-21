// https://onlinejudge.org/external/119/11942.pdf
#include <bits/stdc++.h>

using namespace std;

bool is_sorted_increasignly(vector<int> &elements) {
  bool is_sorted = true;
  for (int i = 1; i < (int)elements.size(); i++) {
    if (elements[i-1] > elements[i]) {
      is_sorted = false;
      break;
    }
  }
  return is_sorted;
}

bool is_sorted_decreasingly(vector<int> &elements) {
  bool is_sorted = true;
  for (int i = 1; i < (int)elements.size(); i++) {
    if (elements[i-1] <= elements[i]) {
      is_sorted = false;
      break;
    }
  }
  return is_sorted;
}

int main() {
  int T;
  cin >> T;

  cout << "Lumberjacks:" << endl;
  while (T--) {
    vector<int> lumberjacks(10);
    for (int &l: lumberjacks) cin >> l;

    if (is_sorted_decreasingly(lumberjacks)
      || is_sorted_increasignly(lumberjacks)){
      cout << "Ordered" << endl;
    } else {
      cout << "Unordered" << endl;
    }
  }
  return 0;
}
