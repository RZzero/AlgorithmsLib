#include <bits/stdc++.h>
#define endl '\n';

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
  int N;
  int cnt = 0;
  cin >> N;
  map<char, int> mapa1;
  map<char, int> mapa2;
  vector<char> v1;
  vector<char> v2;

  for(int i = 0; i < N; i++){
    string s;
    cin >> s;
    if (mapa1[s[0]] > mapa2[s[0]]) {
      mapa2[s[0]]++;
      v2.push_back(s[0]);
    }else {
      mapa1[s[0]]++;
      v1.push_back(s[0]);
    }
  }

  for(int i = 0; i < v1.size(); i++){
    for(int j = i+1; j < v1.size(); j++){
      if(v1[i] == v1[j]) cnt++;
    }
  }

  for(int i = 0; i < v2.size(); i++){
    for(int j = i+1; j < v2.size(); j++){
      if(v2[i] == v2[j]) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}