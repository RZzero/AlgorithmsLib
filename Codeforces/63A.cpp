#include <bits/stdc++.h>
using namespace std;

int main(){
  map<string, vector<string>> mapa;
  int N;
  cin >> N;
  
  for(int i = 0; i < N; i++) {
    string name, role;
    cin >> name >> role;
    if (role == "woman" || role == "child") {
      mapa["woman"].push_back(name);
    }else {
      mapa[role].push_back(name);
    }
  }

  for(int i = 0; i < mapa["rat"].size(); i++)
    cout << mapa["rat"][i] << endl;
  
  for(int i = 0; i < mapa["woman"].size(); i++)
    cout << mapa["woman"][i] << endl;

  for(int i = 0; i < mapa["man"].size(); i++)
    cout << mapa["man"][i] << endl;

  for(int i = 0; i < mapa["captain"].size(); i++)
    cout << mapa["captain"][i] << endl;

  return 0;
}