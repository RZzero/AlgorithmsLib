#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int a,b,x;
  cin >> a >> b >> x;

  string constructed = "";

  for (int i = 0; i < a; i++) constructed+= "0";
  for (int i = 0; i < b; i++) constructed+= "1";

  sort(constructed.begin(), constructed.end());
  do {
    int cnt = 0;
    for (int i = 1; i < constructed.size(); i++){
      if (constructed[i-1]!=constructed[i]) cnt++;
    }
    if (cnt == x) break;
  } while (next_permutation(constructed.begin(), constructed.end()));


  cout << constructed << endl;
  return 0;
}
