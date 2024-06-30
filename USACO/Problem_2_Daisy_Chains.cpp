#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int res = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0, cant = 0;
    for (int j = i; j < n; j++) {
      sum += v[j];
      cant++;

      for (int k = i; k <= j; k++) {
        if (v[k] * cant == sum) {
          res++;
          break;
        }
      }
    }
  }

  cout << res;
}