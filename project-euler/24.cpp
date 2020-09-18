// https://projecteuler.net/problem=24
#include <iostream>

using namespace std;

int main () {
  string s = "0123456789";
  int permutations = 0;

  do {
    permutations++;
    if (permutations == 1e6) break;
  } while(next_permutation(s.begin(), s.end()));
  cout << s << endl;
  return 0;
}
