#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  set<int> numbers;
  cin >> N;
  for(int i = 1; i <= 3001; i++){
    numbers.insert(i);
  }
  for(int i = 0; i < N; i++){
    int dum;cin >> dum;
    numbers.erase(dum);
  }
  cout << *numbers.begin() << endl;
  return 0;
}