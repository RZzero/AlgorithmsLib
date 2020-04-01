// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int arr[4] = {0};

  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
  }

  string s;
  cin >> s;
  
  int calories = 0;
  for(int i = 0; i < s.size(); i++){
    calories+= arr[(int)(s[i]-'0')-1];
  }
    
  cout << calories << endl;
  return 0;
}