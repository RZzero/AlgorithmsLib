#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N;
  cin >> N;

  vector<Long> lucas = {2, 1};

  while (lucas.size() <= 90) {
    int lucas_size = lucas.size();
    lucas.push_back(lucas[lucas_size - 2] + lucas[lucas_size - 1]);
  }

  cout << lucas[N] << endl;
  return 0;
}