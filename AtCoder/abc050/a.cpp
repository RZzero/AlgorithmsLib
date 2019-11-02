#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  char op;
  cin >> a >> op >> b;
  if (op == '+')
    cout << a + b << endl;
  else cout << a-b << endl;
  return 0;
}