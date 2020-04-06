#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  map<string,vector<int>> mapa;
  vector<string> process;
  for (int i = 0; i < strs.size(); i++){
    string cur = strs[i];
    sort(cur.begin(), cur.end());
    mapa[cur].push_back(i);
  }
  vector<vector<string>> answer(mapa.size());

  int j = 0;
  for (auto item: mapa) {
    for (int i = 0; i < item.second.size(); i++ ){
      answer[j].push_back(strs[item.second[i]]);
    }
    j++;
  }

  return answer;
}
int main () {
  vector<string> test = {"eat", "tea", "tan", "ate", "nat", "bat"};
  groupAnagrams(test);
  return 0;
}
