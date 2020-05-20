#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;



int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  vector<int> divisors;
  string S;
  int N;
  cin >> N >> S;

  for (int i = N; i > 1; i--) {
    if (N%i == 0) divisors.push_back(i);
  }

  reverse(divisors.begin(), divisors.end());
  string T = S;
  for (int i = 0; i < divisors.size(); i++) {
    string aux = "";
    for (int j = divisors[i]-1; j >= 0; j--) {
      aux += T[j];
    }

    for (int j = divisors[i]; j < T.size(); j++) {
      aux += T[j];
    }
    T = aux;
  }

  cout << T << endl;
  return 0;
}
