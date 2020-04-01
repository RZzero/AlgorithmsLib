// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> tuplas(n - 2, vector<int>());
  set<pair<int, int>> x;
  vector<int> freq(n + 2, 0);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
      int k;
      cin >> k;
      tuplas[i].push_back(k);
      freq[k] ++;
      x.insert({k, i}); //tuplas 0-based
    }
  }
  sort(x.begin(), x.end());
  vector<vector<int>> answer(n - 2, vector<int>());
  int start_tupla = -1, second_num = -1, first_num = -1, third_num = -1;
  for(int i = 1; i <= n; i++){  //nums 1-based
    if(freq[i] == 1){
      auto it = lower_bound(x.begin(), x.end(), i);
      first_num = i, start_tupla = (*it).second;
      break;
    }
  }
  //second num search
  for(int i = 0; i < 3; i++){
    if(freq[tuplas[start_tupla][i]] == 2){
      second_num = tuplas[start_tupla][i];
    }
    if(freq[tuplas[start_tupla][i]] == 3){
      third_num = tuplas[start_tupla][i];
    }
  }
  answer[0] = vector<int>{first_num, second_num, third_num};
  int cnt = 0;
  while(cnt < n - 2){
    //erase
    x.erase({first_num, start_tupla});
    x.erase({second_num, start_tupla});
    x.erase({third_num, start_tupla});
    //search
    auto it = lower_bound(x.begin(), x.end(), second_num);
    start_tupla = (*it).second;
    first_num = answer[cnt][0], second_num = answer[cnt][0];
    for(int j = 0; j < 3; j++){
      if(tuplas[start_tupla][j] != first_num and tuplas[start_tupla][j] != second_num ){
        third_num = tuplas[start_tupla][j];
        break;
      }
    }
    cnt ++;
    answer[cnt] = vector<int>{first_num, second_num, third_num};
  }
  cout << answer[0][0] << " ";
  for(int i = 1; i < n - 2; i++){
    cout << answer[i][2] << " ";
  }
  return 0;
}