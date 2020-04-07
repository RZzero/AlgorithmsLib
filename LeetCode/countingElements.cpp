#include<iostream>
#include<vector>
#include<map>

using namespace std;

int countElements(vector<int>& arr) {
  int answer = 0;
  map<int,int> mapa;

  for (int i = 0; i < arr.size(); i++) {
    mapa[arr[i]]++;
  }

  for (auto item: mapa) {
    cout << item.first << endl;
    if (mapa.count(item.first + 1) > 0) {
      answer += min(item.second, mapa[item.first + 1]);
    }
  }
  return answer;
}
int main () {
  vector<int> test = {1,2,3};
  cout << countElements(test) << endl;
  return 0;
}
