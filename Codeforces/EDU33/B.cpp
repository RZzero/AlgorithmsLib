#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 1e5;
int main(){
  vector<int> beautifulNumbers;

  for(int i = 1;; i++){
    int number = (pow(2,i)-1)*(pow(2,i-1));
    if (number > LIMIT) break;
    beautifulNumbers.push_back(number);
  }

  int N;
  cin >> N;
  int maxi = -1;
  for(int i = 0; i < beautifulNumbers.size(); i++){
    if (N % beautifulNumbers[i] == 0){
      maxi = max(beautifulNumbers[i], maxi);
    }
  }
  cout << maxi << endl;

  return 0;
}
