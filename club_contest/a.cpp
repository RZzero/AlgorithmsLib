#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

int main () {
  int N;
  int a,b;
  a = b = 0;
  cin >> N;

  string s;
  cin >> s;
  int count = 0;
  for(int i = 0; i < s.size(); i += 2){
    if (s[i] == 'a' && s[i+1] == 'a') {
      s[i+1] = 'b';
      count++;
    }
    else if (s[i] == 'b' && s[i+1] == 'b') {
      s[i+1] = 'a';
      count++;
    }
  }
  cout << count << endl;
  cout << s << endl;
  return 0;
}