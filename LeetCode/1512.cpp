#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> numbers = {1,2,3,1,1,3};
  int answer = 0;

  for (int i = 0; i < numbers.size(); i++) {
    for(int j = i+1; j < numbers.size(); j++) {
      if (numbers[i] == numbers[j]) {
        answer++;
      }
    }
  }
  cout << answer << endl;
  return 0;
}