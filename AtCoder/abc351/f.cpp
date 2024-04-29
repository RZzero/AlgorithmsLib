#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int N;
  cin >> N;

  vector<Long> numbers(N);

  map<Long, Long> mapa;
  for (auto &n : numbers) {
    cin >> n;
    mapa[n]++;
  }

  return 0;
}

/*
6
2 5 3 4 2 5
*/