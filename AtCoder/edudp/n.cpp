#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int N;
vector<Long> numbers;
int main(){
  cin >> N;
  numbers = vector<Long> (N);
  
  for(auto &n: numbers)
    cin >> n;

  Long anw = 0;
  while(numbers.size() != 1){
    Long best = 1e11;
    int pos = 1;
    for(int i = 1; i < numbers.size(); i++){
      if (numbers[i-1] + numbers[i] <= best) {
        best = numbers[i-1] + numbers[i];
        pos = i;
      }
    }

    anw+= best;
    numbers[pos-1] = best;
    numbers.erase(numbers.begin() + pos);
  }
  cout << anw << endl;
  // cout << numbers[0] << endl;
  return 0;
}