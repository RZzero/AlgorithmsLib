#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int n_choose_k(int n, int k) {
  return factorial(n) / (factorial(k) * factorial(n - k));
}

int numTilePossibilities(string tiles) {
  int answer = 0;
  set<char> distincts;
  for (auto &t : tiles) {
    distincts.insert(t);
  }
  return answer;
}

int main() {
  vector<string> test_cases = {
      "AAB",
      "AAABBC",
      "V",
  };

  for (auto &t : test_cases) {
    cout << numTilePossibilities(t) << endl;
  }
  return 0;
}