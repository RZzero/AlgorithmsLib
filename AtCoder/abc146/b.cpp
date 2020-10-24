// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
  int N;
  string s;
  cin >> N >> s;
  for(int i = 0; i < s.size(); i++){
    int current = s[i]-'A';
    s[i] = alphabet[(current + N) % 26];
  }
  cout << s << endl;
  return 0;
}