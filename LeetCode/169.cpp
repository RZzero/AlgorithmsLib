#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> numbers = { 2, 2, 1, 1, 1, 2, 2 };
  map<int,int> occur;

  int most_occur = 0;
  int n = -1;
  for (auto &number: numbers) {
    occur[number]++;
    if (occur[number] > most_occur) {
      n = number;
      most_occur = occur[number];
    }
  }

  cout << n << endl;

  return 0;
}