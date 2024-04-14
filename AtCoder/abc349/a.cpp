#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int balance = 0;
  for (int i = 0; i < N - 1; i++) {
    int x;
    cin >> x;
    balance += x;
  }
  cout << (!balance ? 0 : -balance) << endl;
  return 0;
}