#include <iostream>
#include <vector>
#include <map>

using namespace std;

int singleNumber(vector<int>& nums) {
  int answer;
  map<int,int> myMap;
  for (int a: nums) {
    myMap[a]++;
  }

  for (auto number: myMap) {
    if (number.second == 1) {
      answer = number.first;
      break;
    }
  }
  return answer;
}

int main() {
  vector<int> arreglito {4,1,2,1,2};
  cout << singleNumber(arreglito) << endl;
  return 0;
}